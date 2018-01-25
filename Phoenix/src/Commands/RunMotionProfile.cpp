// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RunMotionProfile.h"
#include "../Subsystems/MotionProfile.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

RunMotionProfile::RunMotionProfile(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::motionProfile.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES


}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void RunMotionProfile::Initialize() {

	Robot::motionProfile.reset(new MotionProfile());
	//motionProfile.reset(new MotionProfile());
	Robot::motionProfile->initMotionProfile();

}

// Called repeatedly when this Command is scheduled to run
void RunMotionProfile::Execute() {
	Robot::motionProfile->control();
	Robot::motionProfile->start();
	Robot::motionProfile->Periodic();


}

// Make this return true when this Command no longer needs to run execute()
bool RunMotionProfile::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void RunMotionProfile::End() {
	Robot::motionProfile->reset();

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunMotionProfile::Interrupted() {
	End();
}
