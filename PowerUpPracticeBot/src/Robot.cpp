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
std::shared_ptr<DriveTrain> Robot::driveTrain;
std::shared_ptr<MotionProfile> Robot::motionProfile;
std::shared_ptr<Intake> Robot::intake;
std::shared_ptr<Arm> Robot::arm;
std::shared_ptr<Climber> Robot::climber;
std::unique_ptr<OI> Robot::oi;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION

void Robot::RobotInit() {
	RobotMap::init();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    driveTrain.reset(new DriveTrain());
    motionProfile.reset(new MotionProfile());
    intake.reset(new Intake());
    arm.reset(new Arm());
    climber.reset(new Climber());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	// This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.
	oi.reset(new OI());

	// Add commands to Autonomous Sendable Chooser
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS

	chooser.AddObject("PositionOneLeft", new PositionOneLeft());
	chooser.AddObject("PositionOneRight", new PositionOneRight());
	chooser.AddObject("PositionTwoLeft", new PositionTwoLeft());
	chooser.AddObject("PositionTwoRight", new PositionTwoRight());
	chooser.AddObject("PositionThreeLeft", new PositionThreeLeft());
	chooser.AddObject("PositionThreeRight", new PositionThreeRight());
	//chooser.AddObject("PositionOneLeftPath", new PositionOneLeftPath());
	//chooser.AddObject("PositionOneRightPath", new PositionOneRightPath());
	//chooser.AddObject("PositionTwoLeftPath", new PositionTwoLeftPath());
	//chooser.AddObject("PositionTwoRightPath", new PositionTwoRightPath());
	//chooser.AddObject("PositionThreeLeftPath", new PositionThreeLeftPath());
	//chooser.AddObject("PositionThreeRightPath", new PositionThreeRightPath());
	chooser.AddObject("DoNothingPath", new DoNothingPath());
	chooser.AddObject("DriveWithEncoders", new DriveWithEncoders());
	//chooser.AddObject("DriveForward", new DriveForward());
	//chooser.AddObject("WaitUntilReady", new WaitUntilReady());

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	frc::SmartDashboard::PutData("Auto Modes", &chooser);

		cs::UsbCamera camera0 = CameraServer::GetInstance()->StartAutomaticCapture(0);
		camera0.SetResolution(1280, 720);
		camera0.SetFPS(15);
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

	/*Put data to the smart dashboard*/

	SmartDashboard::PutNumber("Left Error", RobotMap::driveTrainLeftFront->GetClosedLoopError(0));
		SmartDashboard::PutNumber("Right Error", RobotMap::driveTrainRightFront->GetClosedLoopError(0));
		SmartDashboard::PutNumber("Left Encoder Position", RobotMap::driveTrainLeftFront->GetSelectedSensorPosition(0));
		SmartDashboard::PutNumber("Right Encoder Position", RobotMap::driveTrainRightFront->GetSelectedSensorPosition(0));
		SmartDashboard::PutNumber("Left Encoder Speed", RobotMap::driveTrainLeftFront->GetSelectedSensorVelocity(0));
		SmartDashboard::PutNumber("Right Encoder Speed", RobotMap::driveTrainRightFront->GetSelectedSensorVelocity(0));
		SmartDashboard::PutNumber("Arm PID", RobotMap::armArmPositionSensor->PIDGet());
		SmartDashboard::PutNumber("Arm Pot Voltage", RobotMap::armArmPositionSensor->Get());
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

	/*Put data to the smart dashboard*/

	SmartDashboard::PutNumber("Left Error", RobotMap::driveTrainLeftFront->GetClosedLoopError(0));
	SmartDashboard::PutNumber("Right Error", RobotMap::driveTrainRightFront->GetClosedLoopError(0));
	SmartDashboard::PutNumber("Left Encoder Position", RobotMap::driveTrainLeftFront->GetSelectedSensorPosition(0));
	SmartDashboard::PutNumber("Right Encoder Position", RobotMap::driveTrainRightFront->GetSelectedSensorPosition(0));
	SmartDashboard::PutNumber("Left Encoder Speed", RobotMap::driveTrainLeftFront->GetSelectedSensorVelocity(0));
	SmartDashboard::PutNumber("Right Encoder Speed", RobotMap::driveTrainRightFront->GetSelectedSensorVelocity(0));
	SmartDashboard::PutNumber("Arm PID", RobotMap::armArmPositionSensor->PIDGet());
	SmartDashboard::PutNumber("Arm Pot Voltage", RobotMap::armArmPositionSensor->Get());


}

START_ROBOT_CLASS(Robot);

