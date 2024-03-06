#include <complex.h>
#include<iostream>
using namespace std;

// Write a program that calculates 6^5. Declare your own function to do this.
int Pow(int base, int up)
{
    int result=1;
    for (int i=0; i < up;i++)
    {
        result=result*base;
    }
    return result;
}

int main()
{
    int base=6;
    int up=5;
    int result = Pow(base,up);
    cout<<"Result = "<< result<<endl;
    
}
