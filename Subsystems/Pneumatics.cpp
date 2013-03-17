// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Pneumatics.h"
#include "../Robotmap.h"
Pneumatics::Pneumatics()
 :Subsystem("Pneumatics")
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	throwerPlunger = RobotMap::pneumaticsThrowerPlunger;
	robotClimb = RobotMap::pneumaticsRobotClimb;
	compressor = RobotMap::pneumaticsCompressor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
void Pneumatics::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void Pneumatics::ToggleThrowerPlunger() 
{
	if (throwerPlunger->Get() == DoubleSolenoid::kForward)
	{
		SmartDashboard::PutString("Plunger", "Undeployed");
		throwerPlunger->Set(DoubleSolenoid::kReverse);
	}
	else
	{
		SmartDashboard::PutString("Plunger", "Deployed");
		throwerPlunger->Set(DoubleSolenoid::kForward);
	}
}
void Pneumatics::ToggleRobotClimb() 
{
	if (robotClimb->Get() == DoubleSolenoid::kForward)
	{
		robotClimb->Set(DoubleSolenoid::kReverse);
	}
	else
	{
		robotClimb->Set(DoubleSolenoid::kForward);
	}
}
void Pneumatics::DeployPlunger(bool trueFalse) 
{
	if (trueFalse)
	{
		if (throwerPlunger->Get() != DoubleSolenoid::kForward)
		{
			throwerPlunger->Set(DoubleSolenoid::kForward);			
		}
	}
	else
	{
		if (throwerPlunger->Get() != DoubleSolenoid::kReverse)
		{
			throwerPlunger->Set(DoubleSolenoid::kReverse);			
		}
	}
}

