#include "Global.h"

ADXL345 accelerometer = ADXL345(ADXL3455_CS_PIN);
StepperMotor motor = StepperMotor(STEPPER_MOTOR_STEP_PIN, STEPPER_MOTOR_DIR_PIN, STEPPER_MOTOR_MS1_PIN,STEPPER_MOTOR_MS2_PIN,STEPPER_MOTOR_ENABLE_PIN);

