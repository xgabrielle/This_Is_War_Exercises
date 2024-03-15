#include <iostream>
using namespace std;

/*
 *Write a program that asks the user to enter integers as inputs
 *to be stored in the variables 'a' and 'b' respectively.
 *There are also two integer pointers named ptrA and ptrB.
 *Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
*/

/*int main()
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
}*/
// ----------------------------------------------------------------------------------------------

/*Write a C++ program to find the max of an integral data set.
 *The program will ask the user to input the number of
 *data values in the set and each value.
 *The program prints on screen a pointer that points to the max value.
*/

int main()
{
    int max=0;
    int values[5]{};
    for(int i =0;i<5;i++)
    {
        cin>>values[i];
    }

    for(int i=0; i<=values[i];i++)
    {
        if (values[i]>=max)
        {
            max=values[i];
        }
    }
    int *ptr = &max;
    cout << "Max"<< *ptr;
}