#ifndef Sighting_H
#define Sighting_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class Sighting : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<ADXRS450_Gyro> gyro;
public:
	Sighting();
	void InitDefaultCommand();
	double FindDesiredHeading();
};

#endif  // Sighting_H