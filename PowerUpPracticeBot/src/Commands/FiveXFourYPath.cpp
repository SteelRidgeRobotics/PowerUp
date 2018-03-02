/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "FiveXFourYPath.h"

FiveXFourYPath::FiveXFourYPath() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::motionProfile.get());
	Requires(Robot::driveTrain.get());
}

// Called just before this Command runs the first time
void FiveXFourYPath::Initialize() {
	std::cout << "5X4YPATH" << std::endl;
			Robot::motionProfile->PeriodicTask();
			Robot::motionProfile->initMotionProfile();
			Robot::motionProfile->startFilling(k5X4Y_leftprofile, k5X4Y_rightprofile, k5X4YSz);
}

// Called repeatedly when this Command is scheduled to run
void FiveXFourYPath::Execute() {
	Robot::motionProfile->PeriodicTask();
		Robot::motionProfile->control();
		Robot::motionProfile->start();
}

// Make this return true when this Command no longer needs to run execute()
bool FiveXFourYPath::IsFinished() {
	return Robot::motionProfile->leftStatus.activePointValid && Robot::motionProfile->leftStatus.isLast &&
					Robot::motionProfile->rightStatus.activePointValid && Robot::motionProfile->rightStatus.isLast;
}

// Called once after isFinished returns true
void FiveXFourYPath::End() {
	Robot::motionProfile->reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FiveXFourYPath::Interrupted() {
	End();
}
