/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef CUBEDEPLOYAUTO_H
#define CUBEDEPLOYAUTO_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class CubeDeployAuto : public frc::Command {
public:
	CubeDeployAuto();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif

