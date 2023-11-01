#include "Functionalities.h"

void createObjects(Car *container[3])
{
    container[0] = new Car(CarType::SUV, 20000.0f, "Red", "v101", 123, VehicleType::COMMERCIAL, new Insurance("i101", 20000.0f, InsuranceType::REGULAR));
    container[1] = new Car(CarType::SEDAN, 3000.0f, "Black", "v102", 123, VehicleType::COMMERCIAL, new Insurance("i102", 1200.0f, InsuranceType::ZERO_DEBT));
    container[2] = new Car(CarType::SUV, 6778.0f, "Violet", "v103", 123, VehicleType::SPECIAL_PURPOSE, new Insurance("i103", 2300.0f, InsuranceType::REGULAR));
}

Car **getThresholdInsurance(Car *container[3], float threshold)
{
    Car** cars= new Car*[3];
    int k=0;
    for(int i=0;i<3;i++){
        if(container[i]->getInsurancePlan()->getInsuranceAmount()>threshold){
            cars[k]=container[i];
            k++;
        }
    }
    return cars;
}
