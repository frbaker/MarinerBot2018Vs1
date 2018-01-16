// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "ctre/Phoenix.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<WPI_TalonSRX> RobotMap::driveBaseDriveTrainLeftTalon;
std::shared_ptr<WPI_TalonSRX> RobotMap::driveBaseDriveTrainRightTalon;
std::shared_ptr<frc::DifferentialDrive> RobotMap::driveBaseDriveTrain;
std::shared_ptr<frc::Ultrasonic> RobotMap::driveBaseUltrasonic;
std::shared_ptr<frc::AnalogGyro> RobotMap::driveBaseGyro;
std::shared_ptr<WPI_TalonSRX> RobotMap::mastMastTalon;
std::shared_ptr<WPI_TalonSRX> RobotMap::elbowElbowTalon;
std::shared_ptr<frc::DigitalInput> RobotMap::elbowElbowTopLimit;
std::shared_ptr<frc::DigitalInput> RobotMap::elbowElbowBottomLimit;
std::shared_ptr<frc::DoubleSolenoid> RobotMap::grabberGrabberSolenoid;
std::shared_ptr<frc::DoubleSolenoid> RobotMap::shifterShifterSolenoid;
std::shared_ptr<WPI_TalonSRX> RobotMap::climberClimberTalon;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    frc::LiveWindow *lw = frc::LiveWindow::GetInstance();

    driveBaseDriveTrainLeftTalon.reset(new WPI_TalonSRX(0));
    
    
    driveBaseDriveTrainRightTalon.reset(new WPI_TalonSRX(1));
    
    
    driveBaseDriveTrain.reset(new frc::DifferentialDrive(*driveBaseDriveTrainLeftTalon, *driveBaseDriveTrainRightTalon));
    lw->AddActuator("DriveBase", "Drive Train", driveBaseDriveTrain);
    driveBaseDriveTrain->SetSafetyEnabled(true);
        driveBaseDriveTrain->SetExpiration(0.1);
        driveBaseDriveTrain->SetMaxOutput(1.0);

    driveBaseUltrasonic.reset(new frc::Ultrasonic(0, 1));
    lw->AddSensor("DriveBase", "Ultrasonic", driveBaseUltrasonic);
    
    driveBaseGyro.reset(new frc::AnalogGyro(0));
    lw->AddSensor("DriveBase", "Gyro", driveBaseGyro);
    driveBaseGyro->SetSensitivity(0.007);
    mastMastTalon.reset(new WPI_TalonSRX(2));
    
    
    elbowElbowTalon.reset(new WPI_TalonSRX(3));
    
    
    elbowElbowTopLimit.reset(new frc::DigitalInput(2));
    lw->AddSensor("Elbow", "Elbow Top Limit", elbowElbowTopLimit);
    
    elbowElbowBottomLimit.reset(new frc::DigitalInput(3));
    lw->AddSensor("Elbow", "Elbow Bottom Limit", elbowElbowBottomLimit);
    
    grabberGrabberSolenoid.reset(new frc::DoubleSolenoid(0, 0, 1));
    lw->AddActuator("Grabber", "Grabber Solenoid", grabberGrabberSolenoid);
    
    shifterShifterSolenoid.reset(new frc::DoubleSolenoid(0, 2, 3));
    lw->AddActuator("Shifter", "Shifter Solenoid", shifterShifterSolenoid);
    
    climberClimberTalon.reset(new WPI_TalonSRX(4));
    
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS



}