// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef RUNMOTIONPROFILE_H
#define RUNMOTIONPROFILE_H


#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../Subsystems/MotionProfile.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class MotionProfile;

class RunMotionProfile: public frc::Command {
public:
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
	RunMotionProfile();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
	//std::shared_ptr<MotionProfile> Robot::motionProfile;
	//std::shared_ptr<WPI_TalonSRX> frontleft;
	//std::shared_ptr<WPI_TalonSRX> frontright;

	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES
	//MotionProfile *_example;



};

#endif
