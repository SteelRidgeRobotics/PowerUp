/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "CubeDeployAuto.h"

CubeDeployAuto::CubeDeployAuto(double timeout): frc::TimedCommand(timeout) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::intake.get());
}

// Called just before this Command runs the first time
void CubeDeployAuto::Initialize() {
	std::cout << "CUBEAUTODEPLOY" << std::endl;

}

// Called repeatedly when this Command is scheduled to run
void CubeDeployAuto::Execute() {
Robot::intake->autoDeploy();
}



// Called once after isFinished returns true
void CubeDeployAuto::End() {
	Robot::intake->stopRollers();

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CubeDeployAuto::Interrupted() {
	End();

}
