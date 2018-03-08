// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef MOTIONPROFILE_H
#define MOTIONPROFILE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "ctre/Phoenix.h"
#include "../Profiles.h"
#include "../Instrumentation.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class MotionProfile: public frc::Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<WPI_TalonSRX> leftFront;
	std::shared_ptr<WPI_TalonSRX> rightFront;





	public:
	MotionProfile();
	void InitDefaultCommand() override;
	void Periodic() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS


	//MotionProfileStatus _status; //A variable defined for the built in Talon structure for profiling.

	MotionProfileStatus leftStatus;

	MotionProfileStatus rightStatus;

	Notifier _notifier; //A variable defined for an event handler for profiling.

	SetValueMotionProfile _setValue; //A variable to set the value of Motion Profile. Only has disable, hold and enable.


	/*Variable needed */


	double _lpos;
	double _rpos;
	double _lvel;
	double _rvel;
	double _lheading;
	double _rheading;

	int _state;

	int _loopTimeout;

	bool _bStart;

	static const int kMinPointsInTalon =1; //These variables should probably be moved to RobotMap.h.

	static const int kNumLoopsTimeout=10;

	void PeriodicTask(); //Method used by the event handler.

	void initMotionProfile(); //Method to initialize a motion profile.

	void reset(); //Method to reset after motion profile.

	void control(); //Method that controls the motion profile.

	bool profileDone();

	void startFilling(const double leftprofile[][3], const double rightprofile[][3], int totalCnt); //Method to fill the talons with points.

	void start(); //Method to start the motion profile.

	SetValueMotionProfile getSetValue(); //Method that uses _setvalue from above.

	double ftToRotations(double ft); //Method to convert from feet to rotations. Talon only accepts rotations.

	double velToRotations(double ftpersec); //Method to convert from ft per sec to rotations per minute.


};

#endif
