// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "PositionThreeRightPath.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

PositionThreeRightPath::PositionThreeRightPath(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::motionProfile.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
}// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void PositionThreeRightPath::Initialize() {
	std::cout << "POS3RPATH" << std::endl;
	Robot::motionProfile->PeriodicTask();
	Robot::motionProfile->reset();
	//Robot::motionProfile->control();
	Robot::motionProfile->initMotionProfile();
	Robot::motionProfile->startFilling(kP3Right_leftprofile, kP3Right_rightprofile, kP3RightSz);

}

// Called repeatedly when this Command is scheduled to run
void PositionThreeRightPath::Execute() {
	Robot::motionProfile->PeriodicTask();
	Robot::motionProfile->control();
	Robot::motionProfile->start();
	//Robot::motionProfile->startFilling(kP3Right_leftprofile, kP3Right_rightprofile, kP3RightSz);

}

// Make this return true when this Command no longer needs to run execute()
bool PositionThreeRightPath::IsFinished() {
	if(Robot::motionProfile->_status.isLast==true){
		return true;
	}else {
		return false;
	}
}
// Called once after isFinished returns true
void PositionThreeRightPath::End() {
	Robot::motionProfile->reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PositionThreeRightPath::Interrupted() {
	End();
}
