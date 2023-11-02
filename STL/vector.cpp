#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    int i;
    std::cout << "Vector Size " << vec.size();

    for (i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }

    std::cout << "Vector Elements are " << std::endl;
    for (i = 0; i < 5; i++)
    {
        std::cout << vec[i] << std::endl;
    }

    std::cout<<"Using Iterator"<<std::endl;

    std::vector<int>::iterator v = vec.begin();

    while(v != vec.end()){
        std::cout<<*v<<std::endl;
        v++;
    }
}