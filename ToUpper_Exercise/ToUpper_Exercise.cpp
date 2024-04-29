#include<iostream>
using namespace std;

// Write a function that converts a string to all upper-case.

void Capital(char input[])
{
    for (int i =0; i<input[i];i++)
    {
        toupper(input[i]);
    }
    cout<<"Input in capital letter: "<<input;
}
int main(int argc, char* argv[])
{
    char word[20];
    cout<<"Input a word: ";
    cin>>word;
    Capital(word);
    return 0;
}
