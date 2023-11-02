#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("new.txt");
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    outfile << data << endl;

    ifstream infile;
    infile.open("new.txt");

    char newdata[100];
    infile>>newdata;

    cout<<newdata<<endl;
}