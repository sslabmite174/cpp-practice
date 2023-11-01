#ifndef INSURANCE_H
#define INSURANCE_H

#include <iostream>
#include "InsuranceType.h"
class Insurance
{
private:
    std::string insuranceId;
    float insuranceAmount;
    InsuranceType insuranceType;
public:
    Insurance(std::string insuranceId,float insuranceAmount,InsuranceType insuranceType) ;
    Insurance(const Insurance&)=default;
    ~Insurance() {}

    std::string getInsuranceId() const { return insuranceId; }

    float getInsuranceAmount() const { return insuranceAmount; }

    InsuranceType getInsuranceType() const { return insuranceType; }
};

#endif // INSURANCE_H
