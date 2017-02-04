/*
 * DECLARE CONSTANTS HERE
 */

#ifndef SRC_ROBOTPARAMETERS_H_
#define SRC_ROBOTPARAMETERS_H_

#define DRIVE_SPEED_CONTROLLER_FL_CHANNEL 2
#define DRIVE_SPEED_CONTROLLER_FR_CHANNEL 0
#define DRIVE_SPEED_CONTROLLER_BL_CHANNEL 3
#define DRIVE_SPEED_CONTROLLER_BR_CHANNEL 1
#define DRIVE_SPEED_CONTROLLER_LIFT_CHANNEL 	4
//#define GYRO_SPI_PORT 							SPI::kOnboardCS0_
#define GYRO_ANALOG_PORT 0

#define CAMERA_XRES 720
#define CAMERA_YRES 480

#define X_ORIGIN_OFFSET .5 //Scale from -1,1

#define RIGHT_TRIGGER 3
#define LEFT_TRIGGER 2

#define Y_ERROR_MARGIN 20 // PIXELS
#define AREA_ERROR_MARGIN .05 // PERCENT ERROR

#endif /* SRC_ROBOTPARAMETERS_H_ */
