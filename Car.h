#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"
class Car :  public Vehicle
{
private:
    CarType _cType;
public:
    Car(/* args */) {}
    ~Car() {}

    CarType cType() const { return _cType; }
};

#endif // CAR_H
