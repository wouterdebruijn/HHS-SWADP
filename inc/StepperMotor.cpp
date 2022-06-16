#include "StepperMotor.h"

StepperMotor::StepperMotor(TSensor* sensor) : S(sensor) {}
int StepperMotor::voltage() const { return OutputVoltage; }
void StepperMotor::start() { OutputVoltage = 24; }
void StepperMotor::stop() { OutputVoltage = 0; }
TSensor* StepperMotor::tsensor() const { return S; }
