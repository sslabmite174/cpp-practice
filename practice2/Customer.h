#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "CustomerType.h"
#include <iostream>
class Customer
{
private:
    int _customer_id;
    std::string _customer_name;
    CustomerType _customer_type;
    int _customer_store_credit_points;

public:
    Customer(const Customer &) = default;
    Customer(int customerId, std::string customerName, CustomerType customerType, int customerStoreCreditPoints);
    ~Customer() {}

    int customerId() const { return _customer_id; }

    std::string customerName() const { return _customer_name; }

    CustomerType customerType() const { return _customer_type; }

    int customerStoreCreditPoints() const { return _customer_store_credit_points; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
};

std::string DisplayEnum(CustomerType customerType);

#endif // CUSTOMER_H
