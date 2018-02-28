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
#include "../Commands/UserArm.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS


/*
 * The PIDSubsystem requires 3 parameters when created.
 * The parameters are doubles P, I and D. These need to
 * be tuned very carefully to get them where we need to
 * be.
 * General tuning strategy:
 * Keep doubling the value of P until the system oscillates.
 * Once the system oscillates, scale back to middle of the
 * difference and increase slowly. For example, change 2.0
 * to 4.0. If the arm oscillates at the middle() method
 * when called, change the value to 3.0 and check again.
 * Then increase to 3.5, etc.
 * Once P is generally set up, we can add in D and then I.
 * Set P first. Then for D, start with 10x the value of P
 * and adjust until motion is smooth. We might not need
 * I at all. If setpoints can't be reached with P and D,
 * start I at 1/100th the value of P and adjust accordingly.
 */

Arm::Arm() : frc::PIDSubsystem("Arm",5.0,0.0,0.0) {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROOTBUILDER ID=DECLARATIONS
    armActuator = RobotMap::armArmActuator;
    armPositionSensor = RobotMap::armArmPositionSensor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

    /*
     * SetAbsoluteTolerance sets how close to the
     * setpoint is acceptable.
     */
    SetAbsoluteTolerance(0.05);

    /*
     * SetContinous() needs to be false because
     * we are using max and min constraints for
     * the input.
     */
    GetPIDController()->SetContinuous(false);

    /*
     * This adds a viewable section on LiveWindow
     * of Shuffleboard.
     */
    frc::LiveWindow::GetInstance()->AddActuator("Arm", "PIDSubsystem Controller", GetPIDController());

    /*
     * This section is very important.
     * SetInputRange() accepts two double parameters.
     * The first is the lowest input value that is possible
     * and the second is the highest input value possible.
     * For us these are the smallest and largest voltages.
     * Obviously we have 0.0 as lowest. Highest is 0.75 for now
     * so we don't overextend the actuator. Once PID tuning is
     * complete we can change this value accordingly if needed.
     */
    GetPIDController()->SetInputRange(0.1, 0.5);

    /*
     * This section is also very important.
     * SetOutputRange() accepts two double parameters.
     * The first is the lowest output value that is possible
     * and the second is the highest output value possible.
     * For us these are the smallest and largest values to
     * the motor controllers.
     * The value of -1.0 controls how fast the arm can lower.
     * The value of 3.0 controls how fast the arm can raise.
     * These can be tweaked after PID tuning. PID comes first
     * as PID will also affect the speed at which we reach a
     * setpoint.
     */
    GetPIDController()->SetOutputRange(-1.0, 3.0);

}

void Arm::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    SetDefaultCommand(new UserArm());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void Arm::Periodic() {
    // Put code here to be run every loop

}


// Put methods for controlling this subsystem
// here. Call these from Commands.


/*
 * The ReturnPIDInput() method takes the voltages
 * from the potentiometer and sets them as the
 * input to the PID control loop.
 */

double Arm::ReturnPIDInput() {
	// Return your input value for the PID loop

	return armPositionSensor->Get();
}

/*
 * The UsePIDOutput() method outputs the values
 * from the control loop to the motor controller.
 */

void Arm::UsePIDOutput(double output) {
	// Use output to drive your system, like a motor

	armActuator->PIDWrite(output);
}


/*
 * The armLow() method is the voltage setpoint for
 * the lowest position of the arm. This method is
 * called when the ArmPositionFloor() command is ran
 * by pressing button A on the sidecontroller.
 * This value needs to be adjusted after the PID tuning
 * is complete.
 */

double Arm::armLow(){

	return 0.1;

}

/*
 * The armMiddle() method is the voltage setpoint for
 * the middle position of the arm. This method is
 * called when the ArmPositionSwitch() command is ran
 * by pressing button B on the sidecontroller.
 * This value needs to be adjusted after the PID tuning
 * is complete.
 */

double Arm::armMiddle(){

	return 0.3;

}

/*
 * The armHigh() method is the voltage setpoint for
 * the highest position of the arm. This method is
 * called when the ArmPositionScale() command is ran
 * by pressing button Y on the sidecontroller.
 * This value needs to be adjusted after the PID tuning
 * is complete.
 */

double Arm::armHigh(){

	return 0.4;

}

void Arm::userArm(std::shared_ptr<Joystick> sideController){
	double right_y = -0.2*sideController->GetRawAxis(5);

	if(fabs(right_y) < 0.1) {
			right_y = 0;
		}

	if(right_y > 0){
		right_y *= 2;
	}

	armActuator->Set(right_y);

}


