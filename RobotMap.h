// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"
/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static SpeedController* chassisLeftMotor;
	static SpeedController* chassisRightMotor;
	static RobotDrive* chassisRobotDrive21;
	static Gyro* chassisAlignmentGyro;
	static AnalogChannel* chassisMagRotaryEncoder;
	static DigitalInput* chassisIrSensor;
	static SpeedController* discThrowerMotor;
	static SpeedController* climberMotor;
	static DoubleSolenoid* climberAirAssist;
	static DigitalInput* climberForwardLimit;
	static DigitalInput* climberReverseLimit;
	static SpeedController* tiltTableMotor;
	static DigitalInput* tiltTableFullTiltLimit;
	static DigitalInput* tiltTableNoTiltLimit;
	static DoubleSolenoid* pneumaticsRobotTilt;
	static DoubleSolenoid* pneumaticsRobotClimb;
	static Compressor* pneumaticsCompressor;
	static SpeedController* discKickermotor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static ADXL345_I2C* tiltTableTiltCalculator;
	static void init();
};
#endif
