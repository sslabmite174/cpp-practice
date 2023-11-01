#include "Functionalities.h"

int main()
{
    Car *container[3];
    createObjects(container);
    float insuranceAmt;
    std::cout << "Enter Insurance Amount";
    std::cin >> insuranceAmt;
    Car **newcars = getThresholdInsurance(container, insuranceAmt);

    for (int i = 0; i < 3; i++)
    {
        if (newcars[i] != nullptr)
        {
            std::cout << newcars[i]->getVehicleId();
        }
    }
}