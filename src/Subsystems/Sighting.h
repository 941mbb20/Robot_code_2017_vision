#ifndef Sighting_H
#define Sighting_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class Sighting : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<ADXRS450_Gyro> gyro;
	std::shared_ptr<NetworkTable> networktable;
public:
	Sighting();
	void InitDefaultCommand();
	double FindBoardAngle();
	double FindDesiredAngle();
	bool LeftOrRight();
	double DistanceToTarget();
	void startTable();
	bool TwoTargetsAvailable();
	double d1;
	double d2;
	double boardAng;

	std::vector<double> solidity, area, centerX, centerY, height, width;
};

#endif  // Sighting_H
