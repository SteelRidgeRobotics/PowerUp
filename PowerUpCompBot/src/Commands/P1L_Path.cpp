// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "P1L_Path.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

P1L_Path::P1L_Path(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::motionProfile.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void P1L_Path::Initialize() {
	std::cout << "P1 Left!" << std::endl;
	Robot::motionProfile->initMotionProfile();
	Robot::motionProfile->startFilling(kP1Left_leftprofile, kP1Left_rightprofile, kP1LeftSz);
}

// Called repeatedly when this Command is scheduled to run
void P1L_Path::Execute() {
	Robot::motionProfile->PeriodicTask();
	Robot::motionProfile->control();
	Robot::motionProfile->start();
}

// Make this return true when this Command no longer needs to run execute()
bool P1L_Path::IsFinished() {
	return Robot::motionProfile->profileDone();
}

// Called once after isFinished returns true
void P1L_Path::End() {
	Robot::motionProfile->reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void P1L_Path::Interrupted() {
	End();
}
