#include<iostream>
using namespace std;

int myFunc(int a[], int n){
    if(n==0){
        cout<<a[n]<<endl;
        return 0;
    }
    else{
        cout<<a[n]<<endl;
        return myFunc(a,n-1);
    }
}


int main()
{
    int a[]={1,2,3};

    cout<<"Displaying from last:\n";
    myFunc(a,2);
    return 0;
}