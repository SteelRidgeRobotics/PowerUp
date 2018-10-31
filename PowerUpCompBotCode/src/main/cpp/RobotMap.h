// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "WPILib.h"
#include "ctre/Phoenix.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<WPI_TalonSRX> driveTrainLeftFront;
	static std::shared_ptr<WPI_TalonSRX> driveTrainLeftBack;
	static std::shared_ptr<WPI_TalonSRX> driveTrainRightFront;
	static std::shared_ptr<WPI_TalonSRX> driveTrainRightBack;
	static std::shared_ptr<frc::SpeedController> armArmActuator;
	static std::shared_ptr<frc::AnalogPotentiometer> armArmPositionSensor;
	static std::shared_ptr<frc::SpeedController> intakeLeftRoller;
	static std::shared_ptr<frc::SpeedController> intakeRightRoller;
	static std::shared_ptr<frc::SpeedController> climberClimberRelease;
	static std::shared_ptr<frc::SpeedController> climberClimberPullMotor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();

	//Constants

	static const int kTimeoutMs = 10; //Talon timeout default

	static const int kSlotIDx_Cloop = 0; //Talon controller slot for CL

	static const int kSlotIDx_Motion = 1; //Talon controller slot 1 for MP

	static const int kSensorUnitsPerRotation = 80; //CIMcoder 4 * 20 pulses

	static const int kProfilePeriodMs = 50; //Motion Profile period between points

	static constexpr double kGearRatio = 10.71; //Mini box motor gear ratio

	static constexpr double kWheelDiam = (8.0/12); //Diameter of the wheel in feet

	//Closed Loop PID_F constants

	static constexpr double kF_CloopLeft = 0.0; //Feed forward gain

	static constexpr double kP_CloopLeft = 0.1; //Proportional gain. This is just a start and needs tuning.

	static constexpr double kI_CloopLeft = 0.0; //Integral gain

	static constexpr double kD_CloopLeft = 0.0; // Derivative gain

	static constexpr double kF_CloopRight = 0.0; //Feed forward gain

	static constexpr double kP_CloopRight = 0.1; //Proportional gain. This is just a start and needs tuning.

	static constexpr double kI_CloopRight = 0.0; //Integral gain

	static constexpr double kD_CloopRight = 0.0; // Derivative gain

	//Motion Profile PID_F constants

	static constexpr double kF_MotionLeft = 0.25; //Feed forward gain. This is just a start and needs tuning.

	static constexpr double kP_MotionLeft = 1.0; //Proportional gain. This is just a start and needs tuning.

	static constexpr double kI_MotionLeft = 0.0; //Integral gain

	static constexpr double kD_MotionLeft = 0.0; // Derivative gain

	static constexpr double kF_MotionRight = 0.25; //Feed forward gain. This is just a start and needs tuning.

	static constexpr double kP_MotionRight = 1.0; //Proportional gain. This is just a start and needs tuning.

	static constexpr double kI_MotionRight = 0.0; //Integral gain

	static constexpr double kD_MotionRight = 0.0; // Derivative gain

};
#endif