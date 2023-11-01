#include "Vehicle.h"

Vehicle::Vehicle(std::string vehicleId, int vehicleRegistration, VehicleType vehicleType, Insurance *insurancePlan)
: vehicleId(vehicleId),vehicleRegistration(vehicleRegistration),vehicleType(vehicleType), insurancePlan(insurancePlan)
{
}