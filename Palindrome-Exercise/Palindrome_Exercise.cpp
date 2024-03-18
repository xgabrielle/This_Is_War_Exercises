#include<iostream>
using namespace std;

/* Write a function that checks, whether a word is a Palindrome (same forwards and backwards)
* Hint: Use one pointer from front to Back and one from Back to Front.
* Hint: Move both pointers and check, whether they're the same.*/

void Palindrome(char string[])
{
    int back;
    int front;
    for (back=0;string[back]!= '\0';back++){}
    back--;
    for(front=0; front<back;)
    {
        if(string[front]==string[back])
        {
            front++;
            back--;
        }
        else
        {
            cout<< "Not Palindrome";
            return;
        }
    }
    cout<<"Word is Palindrome";
}

int main()
{
    char userInput[20];
    cout<<"Input a word: ";
    cin>>userInput;

    Palindrome(userInput);
}