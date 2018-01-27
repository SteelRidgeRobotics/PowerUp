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
#include "Instrumentation.h"

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
	static std::shared_ptr<WPI_TalonSRX> drivetrainfrontleft;
	static std::shared_ptr<WPI_TalonSRX> drivetrainrearleft;
	static std::shared_ptr<WPI_TalonSRX> drivetrainfrontright;
	static std::shared_ptr<WPI_TalonSRX> drivetrainrearright;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();


	/*Constants*/

	static const int kTimeoutMs = 10; //Talon timeout default

	static const int kSlotIDx_CLoop = 0; //Talon controller slot for CL

	static const int kSlotIDx_Motion = 1; //Talon controller slot 1 for MP

	static const int kSensorUnitsPerRotation = 80; //CIMcoder 4 * 20 pulses

	static const int kProfilePeriodms = 10; //Motion Profile period between points.

	/*Closed Loop PID_F constants */

	static constexpr double kF_CLoopLeft = 0.0;

	static constexpr double kP_CLoopLeft = 3;

	static constexpr double kI_CLoopLeft = 0.0;

	static constexpr double kD_CLoopLeft = 300;

	static constexpr double kF_CLoopRight = 0.0;

	static constexpr double kP_CLoopRight = 3;

	static constexpr double kI_CLoopRight = 0.0;

	static constexpr double kD_CLoopRight = 300;


	/*Motion Profile PID_F constants */

	static constexpr double kF_MotionLeft = 2.379;

	static constexpr double kP_MotionLeft = 3.0;

	static constexpr double kI_MotionLeft = 0.0;

	static constexpr double kD_MotionLeft = 0.0;

	static constexpr double kF_MotionRight = 2.109;

	static constexpr double kP_MotionRight = 3.0;

	static constexpr double kI_MotionRight = 0.0;

	static constexpr double kD_MotionRight = 0.0;






};
#endif
