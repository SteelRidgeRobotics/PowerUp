// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "DoNothingPath.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

DoNothingPath::DoNothingPath(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void DoNothingPath::Initialize() {
	std::cout << "NoPath." << std::endl;
	Robot::motionProfile->initMotionProfile();
	Robot::motionProfile->startFilling(kNoPath_leftprofile, kNoPath_rightprofile, kNoPathSz);
}

// Called repeatedly when this Command is scheduled to run
void DoNothingPath::Execute() {
	Robot::motionProfile->PeriodicTask();
	Robot::motionProfile->control();
	Robot::motionProfile->start();
}

// Make this return true when this Command no longer needs to run execute()
bool DoNothingPath::IsFinished() {

	return Robot::motionProfile->profileDone();
}

// Called once after isFinished returns true
void DoNothingPath::End() {
	Robot::motionProfile->reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DoNothingPath::Interrupted() {
	End();
}
