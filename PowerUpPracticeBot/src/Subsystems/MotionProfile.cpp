// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "MotionProfile.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

MotionProfile::MotionProfile() : frc::Subsystem("MotionProfile"), _notifier(&MotionProfile::PeriodicTask, this) {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS


	leftFront = RobotMap::driveTrainLeftFront;
	rightFront = RobotMap::driveTrainRightFront;

	_notifier.StartPeriodic(0.025);

	_setValue = SetValueMotionProfile::Disable;


	_lpos = 0.0;
	_rpos = 0.0;

	_lvel=0.0;
	_rvel=0.0;

	_lheading=0.0;
	_rheading=0.0;

	_state = 0;

	_loopTimeout = -1;

	_bStart = false;

	leftFront->ChangeMotionControlFramePeriod(RobotMap::kProfilePeriodMs/2);
	rightFront->ChangeMotionControlFramePeriod(RobotMap::kProfilePeriodMs/2);

}



void MotionProfile::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

       //SetDefaultCommand(new RunMotionProfile());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


void MotionProfile::Periodic() {
    // Put code here to be run every loop
}


// Put methods for controlling this subsystem
// here. Call these from Commands.



void MotionProfile::PeriodicTask(){
	leftFront->ProcessMotionProfileBuffer();
	rightFront->ProcessMotionProfileBuffer();

}

void MotionProfile::initMotionProfile(){

	leftFront->ChangeMotionControlFramePeriod(RobotMap::kProfilePeriodMs/2);
	rightFront->ChangeMotionControlFramePeriod(RobotMap::kProfilePeriodMs/2);


	leftFront->SetStatusFramePeriod(StatusFrameEnhanced::Status_10_MotionMagic, RobotMap::kProfilePeriodMs, 10);
	rightFront->SetStatusFramePeriod(StatusFrameEnhanced::Status_10_MotionMagic,RobotMap::kProfilePeriodMs, 10);


	leftFront->SelectProfileSlot(RobotMap::kSlotIDx_Motion, 0);
	rightFront->SelectProfileSlot(RobotMap::kSlotIDx_Motion, 0);

	leftFront->Set(ControlMode::MotionProfile, SetValueMotionProfile::Disable);
	rightFront->Set(ControlMode::MotionProfile, SetValueMotionProfile::Disable);

	leftFront->ClearMotionProfileTrajectories();
	rightFront->ClearMotionProfileTrajectories();

}

void MotionProfile::reset(){

		 //Let's clear the buffer just in case user decided to disable in the
		 //middle of an MP, and now we have the second half of a profile just
		 // sitting in memory.

	leftFront->ClearMotionProfileTrajectories();
	rightFront->ClearMotionProfileTrajectories();

	leftFront->ClearMotionProfileHasUnderrun(RobotMap::kTimeoutMs);
	rightFront->ClearMotionProfileHasUnderrun(RobotMap::kTimeoutMs);

		// When we do re-enter motionProfile control mode, stay disabled.
		_setValue = SetValueMotionProfile::Disable;
		// When we do start running our state machine start at the beginning.
		_state = 0;
		_loopTimeout = -1;

		 //If application wanted to start an MP before, ignore and wait for next
		 // button press

		_bStart = false;

		leftFront->Set(ControlMode::PercentOutput, 0.0);
		rightFront->Set(ControlMode::PercentOutput, 0.0);

}

void MotionProfile::control(){

	SetValueMotionProfile setOutput = getSetValue();

	leftFront->Set(ControlMode::MotionProfile, setOutput);
	rightFront->Set(ControlMode::MotionProfile, setOutput);




		 //track time, this is rudimentary but that's okay, we just want to make
		 // sure things never get stuck.


		if (_loopTimeout < 0) {
			// do nothing, timeout is disabled
		} else {
			// our timeout is nonzero
			if (_loopTimeout == 0) {

				 //something is wrong. Talon is not present, unplugged, breaker
				 //tripped

				Instrumentation::OnNoProgress();
			} else {
				--_loopTimeout;
			}
		}

		// first check if we are in MP mode
		if((leftFront->GetControlMode() != ControlMode::MotionProfile) || rightFront->GetControlMode() != ControlMode::MotionProfile){

			 //we are not in MP mode. We are probably driving the robot around
			 // using gamepads or some other mode.

			_state = 0;
			_loopTimeout = -1;
		} else {

			 //we are in MP control mode. That means: starting Mps, checking Mp
			 //progress, and possibly interrupting MPs if thats what you want to
			 //do.

			switch (_state) {
				case 0: //wait for application to tell us to start an MP
					if (_bStart) {
						_bStart = false;

						_setValue = SetValueMotionProfile::Disable;

						 // MP is being sent to CAN bus, wait a small amount of time

						_state = 1;
						_loopTimeout = kNumLoopsTimeout;
					}
					break;
				case 1:
						 //wait for MP to stream to Talon, really just the first few
						 //points

					// do we have a minimum numberof points in Talon
					if (leftStatus.btmBufferCnt > kMinPointsInTalon || rightStatus.btmBufferCnt > kMinPointsInTalon) {
						//start (once) the motion profile
						_setValue = SetValueMotionProfile::Enable;
						// MP will start once the control frame gets scheduled
						_state = 2;
						_loopTimeout = kNumLoopsTimeout;
					}
					break;
				case 2: //check the status of the MP

					 //if talon is reporting things are good, keep adding to our
					 //timeout. Really this is so that you can unplug your talon in
					 //the middle of an MP and react to it.

					if (leftStatus.isUnderrun == false || rightStatus.isUnderrun == false) {
						_loopTimeout = kNumLoopsTimeout;
					}

					// If we are executing an MP and the MP finished, start loading
					// another. We will go into hold state so robot servo's
					// position.

					if ((leftStatus.activePointValid && leftStatus.isLast) || (rightStatus.activePointValid && rightStatus.isLast)) {

						 //because we set the last point's isLast to true, we will
						 // get here when the MP is done

						_setValue = SetValueMotionProfile::Hold;
						_state = 0;
						_loopTimeout = -1;
					}
					break;
			}

			// Get the motion profile status every loop
			leftFront->GetMotionProfileStatus(leftStatus);
			rightFront->GetMotionProfileStatus(rightStatus);

			_lheading = leftFront->GetActiveTrajectoryHeading();
			_rheading = rightFront->GetActiveTrajectoryHeading();

			_lpos = leftFront->GetActiveTrajectoryPosition();
			_rpos = rightFront->GetActiveTrajectoryPosition();

			_lvel = leftFront->GetActiveTrajectoryVelocity();
			_rvel = rightFront->GetActiveTrajectoryVelocity();

			Instrumentation::Process(leftStatus, _lpos, _lvel, _lheading);
			Instrumentation::Process(rightStatus, _rpos, _rvel, _rheading);


		}
	}

TrajectoryDuration GetTrajectoryDuration(int durationMs)
	{
		//lookup and return valid value
		switch (durationMs) {
			case 0:		return TrajectoryDuration_0ms;
			case 5:		return TrajectoryDuration_5ms;
			case 10: 	return TrajectoryDuration_10ms;
			case 20: 	return TrajectoryDuration_20ms;
			case 30: 	return TrajectoryDuration_30ms;
			case 40: 	return TrajectoryDuration_40ms;
			case 50: 	return TrajectoryDuration_50ms;
			case 100: 	return TrajectoryDuration_100ms;
		}
		printf("Trajectory Duration not supported - use configMotionProfileTrajectoryPeriod instead\n");
		return TrajectoryDuration_100ms;
	}

// Start filling the MPs to all of the involved Talons.


	void MotionProfile::startFilling(const double leftprofile[][3], const double rightprofile[][3], int totalCnt)
		{
			// create an empty point
			TrajectoryPoint lpoint;
			TrajectoryPoint rpoint;

			// did we get an underrun condition since last time we checked ?
			if(leftStatus.hasUnderrun || rightStatus.hasUnderrun){
				// better log it so we know about it
				Instrumentation::OnUnderrun();

				 //clear the error. This is what seperates "has underrun" from
				 // "is underrun", because the former is cleared by the application.
				 // That way, we never miss logging it.

				leftFront->ClearMotionProfileHasUnderrun(RobotMap::kTimeoutMs);
				rightFront->ClearMotionProfileHasUnderrun(RobotMap::kTimeoutMs);
			}


			 // just in case we are interrupting another MP and there is still buffer
			 // points in memory, clear it.

			leftFront->ClearMotionProfileTrajectories();
			rightFront->ClearMotionProfileTrajectories();

			// set the base trajectory period to zero, use the individual trajectory period below
			leftFront->ConfigMotionProfileTrajectoryPeriod(0, RobotMap::kTimeoutMs);
			rightFront->ConfigMotionProfileTrajectoryPeriod(0, RobotMap::kTimeoutMs);

			// This is fast since it's just into our TOP buffer
			for(int i=0;i<totalCnt;++i){
				double lpositionft = leftprofile[i][0];
				double lvelocityftpers = leftprofile[i][1];


				// for each point, fill our structure and pass it to API
				lpoint.position = ftToRotations(lpositionft);  //Convert Revolutions to Units
				lpoint.velocity = velToRotations(lvelocityftpers) / 600.0; //Convert RPM to Units/100ms
				lpoint.headingDeg = 0; // future feature - not used in this example
				lpoint.profileSlotSelect0 = RobotMap::kSlotIDx_Motion; // which set of gains would you like to use [0,3]?
				lpoint.profileSlotSelect1 = 0; // future feature  - not used in this example - cascaded PID [0,1], leave zero
				lpoint.timeDur = GetTrajectoryDuration((int) leftprofile[i][2]);
				lpoint.zeroPos = false;


				if (i == 0){
					lpoint.zeroPos = true; // set this to true on the first point
				}

				lpoint.isLastPoint = false;


				if ((i + 1) == totalCnt){
					// set this to true on the last point
					lpoint.isLastPoint = true;
				}

				leftFront->PushMotionProfileTrajectory(lpoint);

			}
			for(int j=0;j<totalCnt;++j){
				double rpositionft = rightprofile[j][0];
				double rvelocityftpers = rightprofile[j][1];

				rpoint.position = ftToRotations(rpositionft);  //Convert Revolutions to Units
				rpoint.velocity = velToRotations(rvelocityftpers) / 600.0; //Convert RPM to Units/100ms
				rpoint.headingDeg = 0; // future feature - not used in this example
				rpoint.profileSlotSelect0 = RobotMap::kSlotIDx_Motion; // which set of gains would you like to use [0,3]?
				rpoint.profileSlotSelect1 = 0; // future feature  - not used in this example - cascaded PID [0,1], leave zero
				rpoint.timeDur = GetTrajectoryDuration((int) rightprofile[j][2]);
				rpoint.zeroPos = false;

				if (j == 0){
					// set this to true on the first point
					rpoint.zeroPos = true;
				}

				rpoint.isLastPoint = false;


				if ((j + 1) == totalCnt){
					// set this to true on the last point
					rpoint.isLastPoint = true;
				}


				rightFront->PushMotionProfileTrajectory(rpoint);

			}

}

	void MotionProfile::start() {
			_bStart = true;
		}


		 // @return the output value to pass to Talon's set() routine. 0 for disable
		 //         motion-profile output, 1 for enable motion-profile, 2 for hold
		 //        current motion profile trajectory point.

	SetValueMotionProfile MotionProfile::getSetValue() {
			return _setValue;
		}

	double MotionProfile::ftToRotations(double ft){
		return ft*RobotMap::kGearRatio*RobotMap::kSensorUnitsPerRotation*(1/RobotMap::kWheelDiam)*(1/M_PI);
	}

	double MotionProfile::velToRotations(double ftpersec){
		return ftToRotations(ftpersec)*60;
	}


