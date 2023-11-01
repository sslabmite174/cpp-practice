#include "Car.h"


Car::Car(CarType carType, float carPrice, std::string carColor, std::string vehicleId, int vehicleRegistration, VehicleType vehicleType, Insurance *insurancePlan)
: carType(carType),carPrice(carPrice),carColor(carColor),Vehicle(vehicleId,vehicleRegistration,vehicleType,insurancePlan)
{
}
