// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Intake.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/RollersDeployNormal.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Intake::Intake() : frc::Subsystem("Intake") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftRoller = RobotMap::intakeLeftRoller;
    rightRoller = RobotMap::intakeRightRoller;
    lightOn = RobotMap::intakeLightOn;
    rollerStopSensor = RobotMap::intakeRollerStopSensor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Intake::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new RollersDeployNormal());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void Intake::Periodic() {
    // Put code here to be run every loop

}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Intake::controlCube(std::shared_ptr<Joystick>sideController) {

	double left_trigger = sideController->GetRawAxis(2);
	double right_trigger = sideController->GetRawAxis(3);
	int left_bumper = sideController->GetRawButton(5);
	int right_bumper = sideController->GetRawButton(6);

	if(left_trigger > 0.1 && right_trigger > 0.1) {
		leftRoller->Set(0.0);
		rightRoller->Set(0.0);
	}
	else if ((left_bumper == 1 || right_bumper == 1) && right_trigger == 0) {
		leftRoller->Set(-0.2*left_trigger);
		rightRoller->Set(0.2*left_trigger);
	}
	else if ((left_bumper == 1 || right_bumper == 1) && left_trigger== 0){
		leftRoller->Set(0.2*right_trigger);
		rightRoller->Set(-0.2*right_trigger);
	}
	else if ((left_bumper == 0 || right_bumper == 0) && right_trigger == 0) {
		leftRoller->Set(-1*left_trigger);
		rightRoller->Set(left_trigger);
	}
	else if ((left_bumper == 0 || right_bumper == 0) && left_trigger== 0){
		leftRoller->Set(right_trigger);
		rightRoller->Set(-1*right_trigger);
	}

}

void Intake::stopRollers(){
	leftRoller->Set(0.0);
	rightRoller->Set(0.0);
}

void Intake::autoDeploy(){
	leftRoller->Set(0.75);
	rightRoller->Set(-0.75);
}
