// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/ClimbALevel.h"
#include "Commands/KickerSpeed.h"
#include "Commands/ThrowerOff.h"
#include "Commands/ThrowerOn.h"
#include "Commands/TimedDriveStraight.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	joystick2 = new Joystick(2);
	
	joystick1 = new Joystick(1);
	
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	SmartDashboard::PutData("TimedDriveStraight12", new TimedDriveStraight(0.5, 5.0));
	SmartDashboard::PutData("ClimbALevel5", new ClimbALevel());
	SmartDashboard::PutData("ThrowerOn3", new ThrowerOn());
	SmartDashboard::PutData("ThrowerOff3", new ThrowerOff());
	SmartDashboard::PutData("KickerSpeedOn4", new KickerSpeed(0.5));
	SmartDashboard::PutData("KickerSpeedOff4", new KickerSpeed(0.0));
	SmartDashboard::PutData("KickerSpeedRev4", new KickerSpeed(-0.5));
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getJoystick2() {
	return joystick2;
}
Joystick* OI::getJoystick1() {
	return joystick1;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
