// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "P3R_Path.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

P3R_Path::P3R_Path(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::motionProfile.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void P3R_Path::Initialize() {
	std::cout << "P3 Right!" << std::endl;
	Robot::motionProfile->initMotionProfile();
	Robot::motionProfile->startFilling(kFast3Right_leftprofile, kFast3Right_rightprofile, kFastP3RSize);
}

// Called repeatedly when this Command is scheduled to run
void P3R_Path::Execute() {
	Robot::motionProfile->PeriodicTask();
	Robot::motionProfile->control();
	Robot::motionProfile->start();
}

// Make this return true when this Command no longer needs to run execute()
bool P3R_Path::IsFinished() {
	return Robot::motionProfile->profileDone();
}

// Called once after isFinished returns true
void P3R_Path::End() {
	Robot::motionProfile->reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void P3R_Path::Interrupted() {
	End();
}