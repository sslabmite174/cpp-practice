#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> animals;
    animals.push("Hello World");
    animals.push("Varshith V Hegde");

    while (!animals.empty())
    {
        cout << animals.front() << ",";
        animals.pop();
    }
}