// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Drivetrain: public frc::Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<WPI_TalonSRX> frontleft;
	std::shared_ptr<WPI_TalonSRX> rearleft;
	std::shared_ptr<WPI_TalonSRX> frontright;
	std::shared_ptr<WPI_TalonSRX> rearright;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	double l_pos;
	double r_pos;


public:
	Drivetrain();
	void InitDefaultCommand() override;
	void Periodic() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

	void userDrive(std::shared_ptr<Joystick>xbox); //Method to drive robot using joystick input.

	void encoderPosition(double left, double right); //Method to move robot a distance using encoders.

	void encoderReset(); //Method to reset encoders.

	void encoderDone(); //Method to be done with encoders.

	bool isMove(); //Determines whether the robot is moving.

	double ftToRotations(double ft); //Method to convert from feet to rotations. The talons only work in rotations.



};

#endif
