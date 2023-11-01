#include "Functionalities.h"

void createObjects(Customer *customers[3])
{
    customers[0] = new Customer(1, "Varshith", CustomerType::PREMIUM, 2000);
    customers[1] = new Customer(2, "Shravn", CustomerType::VIP, 100);
    customers[2] = new Customer(3, "Maanikya", CustomerType::PREMIUM, 199);
}

Customer **getCustomersByType(Customer *customers[SIZE], CustomerType customerType)
{
    Customer **setcustomers = new Customer *[SIZE];
    int k = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (customerType == customers[i]->customerType())
        {
            setcustomers[k] = customers[i];
            k++;
        }
    }
    return setcustomers;
}

Customer **getCustomerByStorePoints(Customer *customers[SIZE])
{
    Customer **setcustomers = new Customer *[SIZE];
    int k = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (customers[i]->customerStoreCreditPoints()>=100 && customers[i]->customerStoreCreditPoints()<=200)
        {
            setcustomers[k] = customers[i];
            k++;
        }
    }
    return setcustomers;
}

float AverageStoreCredits(Customer *customers[SIZE])
{
    float sum=0.0f;
    for(int i=0;i<SIZE;i++){
        sum+=customers[i]->customerStoreCreditPoints();
    }
    return sum/3;
}
