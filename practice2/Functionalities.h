#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Customer.h"
#define SIZE 3
void createObjects(Customer* customers[SIZE]);

Customer** getCustomersByType(Customer* customers[SIZE],CustomerType customerType);

Customer** getCustomerByStorePoints(Customer* customers[SIZE]);

float AverageStoreCredits(Customer* customers[SIZE]);
#endif // FUNCTIONALITIES_H
