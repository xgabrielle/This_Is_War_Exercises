#include <iostream>
using namespace std;

/*
 *Write a program that asks the user to enter integers as inputs
 *to be stored in the variables 'a' and 'b' respectively.
 *There are also two integer pointers named ptrA and ptrB.
 *Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
*/

int main()
{
    int a{};
    int b{};
    int *ptrA{};
    int *ptrB{};
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;

    ptrA = &a;
    ptrB = &b;
    
    cout<<"ptrA = "<<*ptrA<<" and ptrB = "<<*ptrB;
    

    
    return 0;
}
