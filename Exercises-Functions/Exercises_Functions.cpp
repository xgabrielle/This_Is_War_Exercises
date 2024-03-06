#include <complex.h>
#include<iostream>
using namespace std;

//Write a program that asks the user for an integer number and find the sum of all natural numbers upto that number.

void NaturalNumbers(int number)
{
    int num{};
    for (int i =1; i<=number;i++)
    {
        num=num+1;
        cout<<num;
    }
    
}
int main()
{
    int number{};
    cout<< "Write any number that's higher than 0"<<endl;
    cin>> number;
    NaturalNumbers(number);
}

//--------------------------------------------------------------------------------------------------------------------

//Write a program that ask for two numbers, compare them and show the maximum.
//Declare a function called max_two that compares the numbers and returns the maximum.

/*int Max_Two(int first, int second)
{
    int result{};
    if (first > second){result=first;}
    else {result=second;}
    return result;
}

int main()
{
    int numOne=4;
    int numTwo=12;
    int largest = Max_Two(numOne,numTwo);
    cout<<"Between "<<numOne<<" and "<< numTwo<<endl<<
        "Number "<< largest<<" is the largest number between the two."<<endl;
}*/
//---------------------------------------------------------------------------------------------------------------------

// Write a program that asks a name say hello.
// Use your own function, that recives a string of
// characters (name) and prints on screen the hello message.
// (Doesn't returns anything- void type)

/*void SayHello(char name[])
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
}*/

//---------------------------------------------------------------------------------------------------------------------

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
