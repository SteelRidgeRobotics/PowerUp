/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "FiveFeetPath.h"

FiveFeetPath::FiveFeetPath() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::motionProfile.get());
	Requires(Robot::driveTrain.get());
}

// Called just before this Command runs the first time
void FiveFeetPath::Initialize() {
	std::cout << "5FEETPATH" << std::endl;
			Robot::motionProfile->PeriodicTask();
			Robot::motionProfile->initMotionProfile();
			Robot::motionProfile->startFilling(k5Feet_leftprofile, k5Feet_rightprofile, k5FeetSz);
}

// Called repeatedly when this Command is scheduled to run
void FiveFeetPath::Execute() {
	Robot::motionProfile->PeriodicTask();
		Robot::motionProfile->control();
		Robot::motionProfile->start();
}

// Make this return true when this Command no longer needs to run execute()
bool FiveFeetPath::IsFinished() {
	return Robot::motionProfile->leftStatus.activePointValid && Robot::motionProfile->leftStatus.isLast &&
					Robot::motionProfile->rightStatus.activePointValid && Robot::motionProfile->rightStatus.isLast;
}

// Called once after isFinished returns true
void FiveFeetPath::End() {
	Robot::motionProfile->reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FiveFeetPath::Interrupted() {
	End();
}
