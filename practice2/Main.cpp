#include "Functionalities.h"

int main(){
    Customer* customers[SIZE]= {nullptr};
    createObjects(customers);
    Customer** newset = getCustomersByType(customers,CustomerType::PREMIUM);
    for(int i=0;i<SIZE;i++){
        if(newset[i]!=nullptr){
            std::cout <<*newset[i]<<"\n";
        }
    }
    std::cout<<"STore POInts \n";
    Customer** storepoints = getCustomerByStorePoints(customers);
    for(int i=0;i<SIZE;i++){
        if(newset[i]!=nullptr){
            std::cout <<*storepoints[i]<<"\n";
        }
    }
    std::cout<<"Average Store POints : "<<AverageStoreCredits(customers)<<"\n";
}