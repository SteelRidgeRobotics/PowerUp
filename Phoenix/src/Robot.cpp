// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Robot.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
std::shared_ptr<Drivetrain> Robot::drivetrain;
std::shared_ptr<MotionProfile> Robot::motionProfile;
std::unique_ptr<OI> Robot::oi;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION

void Robot::RobotInit() {
	RobotMap::init();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    drivetrain.reset(new Drivetrain());
    SmartDashboard::PutData(drivetrain.get());
    motionProfile.reset(new MotionProfile());
    SmartDashboard::PutData(motionProfile.get());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	// This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.
	oi.reset(new OI());

	// Add commands to Autonomous Sendable Chooser
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS

	chooser.AddObject("RunMotionProfile", new RunMotionProfile());
	chooser.AddObject("DriveEncRotations", new DriveEncRotations());
	chooser.AddObject("DriveStop", new DriveStop());
	chooser.AddObject("ResetEncoders", new ResetEncoders());
	chooser.AddObject("DriveEncVelocity", new DriveEncVelocity());
	chooser.AddObject("AutoGroup1", new AutoGroup1());

	chooser.AddDefault("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	frc::SmartDashboard::PutData("Auto Modes", &chooser);
}

/**
 * This function is called when the disabled button is hit.
 * You can use it to reset subsystems before shutting down.
 */
void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit() {
	autonomousCommand = chooser.GetSelected();
	if (autonomousCommand != nullptr)
		autonomousCommand->Start();
}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();

	/*Put data to the smart dashbard*/

	SmartDashboard::PutNumber("Left Encoder Position", RobotMap::drivetrainfrontleft->GetSelectedSensorPosition(0));
	SmartDashboard::PutNumber("Right Encoder Position",RobotMap::drivetrainfrontright->GetSelectedSensorPosition(0));
	SmartDashboard::PutNumber("Left Encoder Velocity", RobotMap::drivetrainfrontleft->GetSelectedSensorVelocity(0));
	SmartDashboard::PutNumber("Right Encoder Velocity",RobotMap::drivetrainfrontright->GetSelectedSensorVelocity(0));
}

void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// these lines or comment it out.
	if (autonomousCommand != nullptr)
		autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();

	/*Put data to the smart dashbard*/

	SmartDashboard::PutNumber("Left Error", RobotMap::drivetrainfrontleft->GetClosedLoopError(0));
	SmartDashboard::PutNumber("Right Error", RobotMap::drivetrainfrontright->GetClosedLoopError(0));
	SmartDashboard::PutNumber("Left Encoder Position", RobotMap::drivetrainfrontleft->GetSelectedSensorPosition(0));
	SmartDashboard::PutNumber("Right Encoder Position",RobotMap::drivetrainfrontright->GetSelectedSensorPosition(0));
	SmartDashboard::PutNumber("Left Encoder Speed", RobotMap::drivetrainfrontleft->GetSelectedSensorVelocity(0));
	SmartDashboard::PutNumber("Right Encoder Speed", RobotMap::drivetrainfrontright->GetSelectedSensorVelocity(0));
}

START_ROBOT_CLASS(Robot);

