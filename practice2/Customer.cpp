#include "Customer.h"
#include "CustomerType.h"
Customer::Customer(int customerId, std::string customerName, CustomerType customerType, int customerStoreCreditPoints)
    : _customer_id(customerId), _customer_name(customerName), _customer_type(customerType), _customer_store_credit_points(customerStoreCreditPoints)
{
}
std::ostream &operator<<(std::ostream &os, const Customer &rhs)
{
    os << "_customer_id: " << rhs._customer_id
       << " _customer_name: " << rhs._customer_name
       << " _customer_type: " << DisplayEnum(rhs._customer_type)
       << " _customer_store_credit_points: " << rhs._customer_store_credit_points;
    return os;
}

std::string DisplayEnum(CustomerType customerType)
{
    if (CustomerType::PREMIUM == customerType)
    {
        return "PREMIUM";
    }
    else if (CustomerType::REGULAR == customerType)
    {
        return "REGULAR";
    }
    else
    {
        return "VIP";
    }
}
