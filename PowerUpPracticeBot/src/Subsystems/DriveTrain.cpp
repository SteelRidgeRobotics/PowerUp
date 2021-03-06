// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "ctre/Phoenix.h"


#include "DriveTrain.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/DriveWithJoysticks.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

DriveTrain::DriveTrain() : frc::Subsystem("DriveTrain") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftFront = RobotMap::driveTrainLeftFront;
    leftBack = RobotMap::driveTrainLeftBack;
    rightBack = RobotMap::driveTrainRightBack;
    rightFront = RobotMap::driveTrainRightFront;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

    l_pos = 0.0;
    r_pos = 0.0;
}

void DriveTrain::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new DriveWithJoysticks());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void DriveTrain::Periodic() {
    // Put code here to be run every loop

}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::userDrive(std::shared_ptr<Joystick>mainController) {
	double left_y = -1*mainController->GetRawAxis(1);
	double right_y = -1*mainController->GetRawAxis(5);
	if(fabs(left_y) < 0.1) {
		left_y = 0;
	}

	if(fabs(right_y) < 0.1) {
		right_y = 0;
	}

	int l_bump = mainController->GetRawButton(5);

	if(l_bump == 1) {
		left_y = -0.6*mainController->GetRawAxis(1);
		right_y = -0.6*mainController->GetRawAxis(5);
	}

		leftFront->Set(ControlMode::PercentOutput, left_y);
		rightFront->Set(ControlMode::PercentOutput, right_y);

}

void DriveTrain::encoderPosition(double left, double right){
	leftFront->Set(ControlMode::Position, ftToRotations(left));
	rightFront->Set(ControlMode::Position, ftToRotations(right));


	l_pos = left;
	r_pos = right;
}


void DriveTrain::encoderReset() {
	leftFront->SetSelectedSensorPosition(0, 0, RobotMap::kTimeoutMs);
	rightFront->SetSelectedSensorPosition(0, 0, RobotMap::kTimeoutMs);
}



void DriveTrain::encoderDone() {
	leftFront->Set(ControlMode::PercentOutput, 0.0);
	rightFront->Set(ControlMode::PercentOutput, 0.0);

	l_pos = 0.0;
	r_pos = 0.0;
}

bool DriveTrain::isMove(){
	if ((leftFront->GetSelectedSensorPosition(0) < (l_pos + .1) && leftFront->GetSelectedSensorPosition(0) > (l_pos - .1))
				&& rightFront->GetSelectedSensorPosition(0) < (r_pos + .1)
				&& rightFront->GetSelectedSensorPosition(0) > (r_pos - .1)) {
			return true;
		} else {
			return false;
		}
}



double DriveTrain::ftToRotations(double ft){
	return ft*RobotMap::kGearRatio*RobotMap::kSensorUnitsPerRotation*(1/RobotMap::kWheelDiam)*(1/M_PI);
}


