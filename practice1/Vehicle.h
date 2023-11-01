#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "VehicleType.h"
#include "Insurance.h"
class Vehicle
{
private:
    std::string vehicleId;
    int vehicleRegistration;
    VehicleType vehicleType;
    Insurance *insurancePlan;
public:
    Vehicle(const Vehicle &) =default;
    Vehicle(std::string vehicleId,int vehicleRegistration,VehicleType vehicleType, Insurance *insurancePlan);
    ~Vehicle() {}

    std::string getVehicleId() const { return vehicleId; }

    int getVehicleRegistration() const { return vehicleRegistration; }

    VehicleType getVehicleType() const { return vehicleType; }

    Insurance *getInsurancePlan() const { return insurancePlan; }
};

#endif // VEHICLE_H
