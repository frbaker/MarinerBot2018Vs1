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
#include "Commands/AutonomousCommand.h"
#include "Commands/ClimbDown.h"
#include "Commands/ClimbUp.h"
#include "Commands/CloseGrabber.h"
#include "Commands/Downshift.h"
#include "Commands/DriveWithJoy.h"
#include "Commands/LowerElbow.h"
#include "Commands/LowerMast.h"
#include "Commands/OpenGrabber.h"
#include "Commands/RaiseElbow.h"
#include "Commands/RaiseMast.h"
#include "Commands/ResetAhrs.h"
#include "Commands/Upshift.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    joystick.reset(new frc::Joystick(0));
    
    resetAhrs3.reset(new frc::JoystickButton(joystick.get(), 3));
    resetAhrs3->WhenPressed(new ResetAhrs());
    climbDown2.reset(new frc::JoystickButton(joystick.get(), 2));
    climbDown2->WhileHeld(new ClimbDown());
    climbUp1.reset(new frc::JoystickButton(joystick.get(), 1));
    climbUp1->WhileHeld(new ClimbUp());

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("Drive With Joy", new DriveWithJoy());
    frc::SmartDashboard::PutData("Reset Ahrs", new ResetAhrs());
    frc::SmartDashboard::PutData("Downshift", new Downshift());
    frc::SmartDashboard::PutData("Upshift", new Upshift());
    frc::SmartDashboard::PutData("Lower Mast", new LowerMast());
    frc::SmartDashboard::PutData("Raise Mast", new RaiseMast());
    frc::SmartDashboard::PutData("Close Grabber", new CloseGrabber());
    frc::SmartDashboard::PutData("Open Grabber", new OpenGrabber());
    frc::SmartDashboard::PutData("Lower Elbow", new LowerElbow());
    frc::SmartDashboard::PutData("Raise Elbow", new RaiseElbow());
    frc::SmartDashboard::PutData("ClimbDown", new ClimbDown());
    frc::SmartDashboard::PutData("Climb Up", new ClimbUp());
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<frc::Joystick> OI::getJoystick() {
   return joystick;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS