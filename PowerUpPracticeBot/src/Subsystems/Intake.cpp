// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



/*
#include "Intake.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/RollerStop.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Intake::Intake() : frc::Subsystem("Intake") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftRoller = RobotMap::intakeLeftRoller;
    rightRoller = RobotMap::intakeRightRoller * -1;
    lightOn = RobotMap::intakeLightOn;
    rollerStopSensor = RobotMap::intakeRollerStopSensor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Intake::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new RollerStop());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void Intake::Periodic() {
    // Put code here to be run every loop

}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Intake::usercontrolintake(std::shared_ptr<Joystick>sideController) {

	int left_trigger = sideController->GetRawAxis(2);
	int right_trigger = sideController->GetRawAxis(3)*-1;
	int left_bumper = sideController->GetRawButton(5);
	double rumble;
	if (left_bumper == 1) {

		left_trigger *= 1; //sets the speed of the rollers to half
		right_trigger *= 1; // the same as left trigger *.5
                   c
	}

	else {

		left_trigger *= .5;
		right_trigger *= .5;

	}

	if (left_trigger >= .1 && right_trigger == 0 && rollerStopSensor == 0){

		leftRoller, rightRoller = left_trigger*-1 ;

	}
	else if(right_trigger >= .1 && left_trigger == 0){

		leftRoller, rightRoller = right_trigger;
	}
	else if (left_trigger >= .1 && rollerStopSensor == 1){

		setRumble(RumbleType.kLeftRumble, rumble);
	}
	TODO: get the rumble function working in the
	 controller to let the user know of things

	else {

		leftRoller, rightRoller = 0;

	}

	if (rollerStopSensor == 1)

	{lightOn = 1; }

}

/*
