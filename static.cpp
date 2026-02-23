#include<iostream>
#include<iomanip>
using namespace std;

void myFunc()
{
    static int count = 0;
    count++;

    cout<<count<<setw(3);
}

int main()
{
    myFunc();
    myFunc();
    myFunc();
    myFunc();
    return 0;
}