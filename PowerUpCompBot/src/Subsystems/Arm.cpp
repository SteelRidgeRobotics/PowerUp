// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "Arm.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/ControlArm.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID
Arm::Arm() : PIDSubsystem("Arm", 5.0, 0.0, 0.0) {
    SetAbsoluteTolerance(0.025);
    GetPIDController()->SetContinuous(false);
    frc::LiveWindow::GetInstance()->AddActuator("Arm", "PIDSubsystem Controller", GetPIDController());
    GetPIDController()->SetInputRange(0.09, 0.5);
    GetPIDController()->SetOutputRange(-1.0, 4.0);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    armActuator = RobotMap::armArmActuator;
    armPositionSensor = RobotMap::armArmPositionSensor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

    // Use these to get going:
    // SetSetpoint() -  Sets where the PID controller should move the system
    //                  to
    // Enable() - Enables the PID controller.
}

double Arm::ReturnPIDInput() {
    // Return your input value for the PID loop
    // e.g. a sensor, like a potentiometer:
    // yourPot->SetAverageVoltage() / kYourMaxVoltage;
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SOURCE
        return armPositionSensor->Get();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SOURCE
}

void Arm::UsePIDOutput(double output) {
    // Use output to drive your system, like a motor
    // e.g. yourMotor->Set(output);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=OUTPUT
    armActuator->PIDWrite(output);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=OUTPUT
}

void Arm::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new ControlArm());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void Arm::userArm(std::shared_ptr<Joystick> sideController){
	double right_y = -0.2*sideController->GetRawAxis(5);

	if(fabs(right_y) < 0.1) {
			right_y = 0;
		}

	if(right_y > 0){
		right_y *= 3;
	}

	armActuator->Set(right_y);

}
