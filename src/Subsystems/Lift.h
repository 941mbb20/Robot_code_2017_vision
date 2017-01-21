#ifndef Lift_H
#define Lift_H

#include "Commands/Subsystem.h"
#include "WPIlib.h"

class Lift : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	std::shared_ptr<SpeedController> speedController1;
	std::shared_ptr<SpeedController> speedController2;


public:
	Lift();

	void setMotors(float speed);
};

#endif  // Lift_H