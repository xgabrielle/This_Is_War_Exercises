#include<iostream>
using namespace std;

/* Write a function that checks, whether a word is a Palindrome (same forwards and backwards)
* Hint: Use one pointer from front to Back and one from Back to Front.
* Hint: Move both pointers and check, whether they're the same.*/

void Palindrome(char string[])
{
    int *front;
    int *back;
    for (int i=0;i<*string;i++)
    {
        
    }
    cout<<string;
}

int main()
{

    char userInput[20];
    cout<<"Input a word: ";
    cin>>userInput;

    Palindrome(userInput);
}