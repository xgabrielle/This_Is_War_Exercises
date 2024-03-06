#include <complex.h>
#include<iostream>
using namespace std;

// Write a program that asks a name say hello.
// Use your own function, that recives a string of
// characters (name) and prints on screen the hello message.
// (Doesn't returns anything- void type)

void SayHello(char name[])
{
    int length{};
    while(name[length]!='\0'&&length<=10){length++;}
    for (int i=0; i<length;i++){}
    cout<<"Hello "<<name<<endl;
}

int main()
{
    char name[10];
    cout<< "What's your name? ";
    cin>>name;
    SayHello(name);
}

//------------------------------------------------------------------------------

// Write a program that calculates 6^5. Declare your own function to do this.
/*
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
*/
