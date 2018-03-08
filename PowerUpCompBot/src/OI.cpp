// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutoArm.h"
#include "Commands/AutoDeploy.h"
#include "Commands/ClimberPin.h"
#include "Commands/ClimberStop.h"
#include "Commands/ClimberWinch.h"
#include "Commands/ControlArm.h"
#include "Commands/ControlCube.h"
#include "Commands/CrossTheLine.h"
#include "Commands/DoNothing.h"
#include "Commands/DoNothingPath.h"
#include "Commands/DriveEncoders.h"
#include "Commands/DriveWithJoysticks.h"
#include "Commands/FiveFeetPath.h"
#include "Commands/FiveXFourYPath.h"
#include "Commands/P1L_Path.h"
#include "Commands/P1R_Path.h"
#include "Commands/P2L_Path.h"
#include "Commands/P2R_Path.h"
#include "Commands/P3L_Path.h"
#include "Commands/P3R_Path.h"
#include "Commands/Pos1Switch.h"
#include "Commands/Pos2SwitchLeft.h"
#include "Commands/Pos2SwitchRight.h"
#include "Commands/Pos3Switch.h"
#include "Commands/ResetEncoders.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    mainController.reset(new frc::Joystick(0));
    
    mc_B.reset(new frc::JoystickButton(mainController.get(), 2));
    mc_B->WhenPressed(new DriveEncoders(10, 10));
    mc_A.reset(new frc::JoystickButton(mainController.get(), 1));
    mc_A->WhenPressed(new ResetEncoders());
    sideController.reset(new frc::Joystick(1));
    
    x.reset(new frc::JoystickButton(sideController.get(), 3));
    x->WhenPressed(new ClimberStop());
    startButton.reset(new frc::JoystickButton(sideController.get(), 8));
    startButton->WhenPressed(new ClimberWinch());
    backButton.reset(new frc::JoystickButton(sideController.get(), 7));
    backButton->WhenPressed(new ClimberPin(0.5));
    y.reset(new frc::JoystickButton(sideController.get(), 4));
    y->WhenPressed(new AutoArm(0.5));
    b.reset(new frc::JoystickButton(sideController.get(), 2));
    b->WhenPressed(new AutoArm(0.25));
    a.reset(new frc::JoystickButton(sideController.get(), 1));
    a->WhenPressed(new AutoArm(0.05));

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("DoNothing", new DoNothing());
    frc::SmartDashboard::PutData("CrossTheLine", new CrossTheLine());
    frc::SmartDashboard::PutData("Pos3Switch", new Pos3Switch());
    frc::SmartDashboard::PutData("Pos2SwitchRight", new Pos2SwitchRight());
    frc::SmartDashboard::PutData("Pos2SwitchLeft", new Pos2SwitchLeft());
    frc::SmartDashboard::PutData("Pos1Switch", new Pos1Switch());
    frc::SmartDashboard::PutData("P3R_Path", new P3R_Path());
    frc::SmartDashboard::PutData("P3L_Path", new P3L_Path());
    frc::SmartDashboard::PutData("P2R_Path", new P2R_Path());
    frc::SmartDashboard::PutData("P2L_Path", new P2L_Path());
    frc::SmartDashboard::PutData("P1L_Path", new P1L_Path());
    frc::SmartDashboard::PutData("P1R_Path", new P1R_Path());

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
