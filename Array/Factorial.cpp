#include<iostream>
using namespace std;

int main()
{
    int a;
    int fact=1;
    cout<<"Enter the no: ";
    cin>>a;

    for(int i=a; i>1; i--)
    {
        fact *= i;
    }
    cout<<"The factorial of the "<<a<<" is "<<fact<<endl;

    return 0;
}