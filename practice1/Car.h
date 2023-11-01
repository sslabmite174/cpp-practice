#ifndef CAR_H
#define CAR_H
#include "CarType.h"
#include<iostream>
#include "Vehicle.h"
class Car : public Vehicle
{
private:
    CarType carType;
    float carPrice;
    std::string carColor;

public:
    Car(const Car &) =default;
    Car(CarType carType,float carPrice,std::string carColor,std::string vehicleId,int vehicleRegistration,VehicleType vehicleType,Insurance * insurancePlan);
    ~Car() {}

    CarType getCarType() const { return carType; }

    float getCarPrice() const { return carPrice; }

    std::string getCarColor() const { return carColor; }
};

#endif // CAR_H
