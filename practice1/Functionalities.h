#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Vehicle.h"
#include "Insurance.h"
#include "Car.h"
void createObjects(Car* container[3]);

Car** getThresholdInsurance(Car* container[3],float threshold);

#endif // FUNCTIONALITIES_H
