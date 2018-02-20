// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include <Commands/RollerStop.h>
#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/ArmPositionFloor.h"
#include "Commands/ArmPositionScale.h"
#include "Commands/ArmPositionSwitch.h"
#include "Commands/ClimberPull.h"
#include "Commands/ClimberReach.h"
#include "Commands/ClimberStop.h"
#include "Commands/DoNothing.h"
#include "Commands/DoNothingPath.h"
#include "Commands/DriveForward.h"
#include "Commands/DriveStop.h"
#include "Commands/DriveWithEncoders.h"
#include "Commands/DriveWithJoysticks.h"
#include "Commands/IntakeSwitchRumble.h"
#include "Commands/PositionOneLeft.h"
#include "Commands/PositionOneLeftPath.h"
#include "Commands/PositionOneRight.h"
#include "Commands/PositionOneRightPath.h"
#include "Commands/PositionThreeLeft.h"
#include "Commands/PositionThreeLeftPath.h"
#include "Commands/PositionThreeRight.h"
#include "Commands/PositionThreeRightPath.h"
#include "Commands/PositionTwoLeft.h"
#include "Commands/PositionTwoLeftPath.h"
#include "Commands/PositionTwoRight.h"
#include "Commands/PositionTwoRightPath.h"
#include "Commands/ResetDriveTrain.h"
#include "Commands/RollersDeployNormal.h"
#include "Commands/RunMotionProfile.h"
#include "Commands/WaitUntilReady.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    mainController.reset(new frc::Joystick(0));
    
    mc_X.reset(new frc::JoystickButton(mainController.get(), 3));
    mc_X->WhenPressed(new RunMotionProfile());
    mc_B.reset(new frc::JoystickButton(mainController.get(), 2));
    mc_B->WhenPressed(new DriveWithEncoders());
    mc_A.reset(new frc::JoystickButton(mainController.get(), 1));
    mc_A->WhenPressed(new ResetDriveTrain());
    sideController.reset(new frc::Joystick(1));
    
    startButton.reset(new frc::JoystickButton(sideController.get(), 8));
    startButton->WhileHeld(new ClimberPull());
    backButton.reset(new frc::JoystickButton(sideController.get(), 7));
    backButton->WhenPressed(new ClimberReach(1.0));
    y.reset(new frc::JoystickButton(sideController.get(), 4));
    y->WhenPressed(new ArmPositionScale());
    b.reset(new frc::JoystickButton(sideController.get(), 2));
    b->WhenPressed(new ArmPositionSwitch());
    a.reset(new frc::JoystickButton(sideController.get(), 1));
    a->WhenPressed(new ArmPositionFloor());

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("IntakeSwitchRumble", new IntakeSwitchRumble());
    frc::SmartDashboard::PutData("WaitUntilReady", new WaitUntilReady());
    frc::SmartDashboard::PutData("DriveForward", new DriveForward());
    frc::SmartDashboard::PutData("DoNothing", new DoNothing());
    frc::SmartDashboard::PutData("ResetDriveTrain", new ResetDriveTrain());
    frc::SmartDashboard::PutData("DriveWithEncoders", new DriveWithEncoders());
    frc::SmartDashboard::PutData("DoNothingPath", new DoNothingPath());
    frc::SmartDashboard::PutData("PositionThreeRightPath", new PositionThreeRightPath());
    frc::SmartDashboard::PutData("PositionThreeLeftPath", new PositionThreeLeftPath());
    frc::SmartDashboard::PutData("PositionTwoRightPath", new PositionTwoRightPath());
    frc::SmartDashboard::PutData("PositionTwoLeftPath", new PositionTwoLeftPath());
    frc::SmartDashboard::PutData("PositionOneRightPath", new PositionOneRightPath());
    frc::SmartDashboard::PutData("PositionOneLeftPath", new PositionOneLeftPath());
    frc::SmartDashboard::PutData("PositionThreeRight", new PositionThreeRight());
    frc::SmartDashboard::PutData("PositionThreeLeft", new PositionThreeLeft());
    frc::SmartDashboard::PutData("PositionTwoRight", new PositionTwoRight());
    frc::SmartDashboard::PutData("PositionTwoLeft", new PositionTwoLeft());
    frc::SmartDashboard::PutData("PositionOneRight", new PositionOneRight());
    frc::SmartDashboard::PutData("PositionOneLeft", new PositionOneLeft());
    frc::SmartDashboard::PutData("ClimberStop", new ClimberStop());
    frc::SmartDashboard::PutData("ClimberPull", new ClimberPull());
    frc::SmartDashboard::PutData("ClimberReach", new ClimberReach(1.0));
    frc::SmartDashboard::PutData("RollerStop", new RollerStop());
    frc::SmartDashboard::PutData("RollersDeployNormal", new RollersDeployNormal());
    frc::SmartDashboard::PutData("ArmPositionScale", new ArmPositionScale());
    frc::SmartDashboard::PutData("ArmPositionSwitch", new ArmPositionSwitch());
    frc::SmartDashboard::PutData("ArmPositionFloor", new ArmPositionFloor());
    frc::SmartDashboard::PutData("DriveWithJoysticks", new DriveWithJoysticks());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<frc::Joystick> OI::getSideController() {
   return sideController;
}

std::shared_ptr<frc::Joystick> OI::getMainController() {
   return mainController;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
