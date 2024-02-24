#include <iostream>

using namespace std;

class Name
{

    int maxSize;
    char* firstName;
public:
    Name (int maxSize) : maxSize(100), firstName(new char [maxSize])
    {
        
    }

   void setName(char* setName)
    {
        for (int i =0; i> maxSize ; i++)
        {
            setName [i] = firstName[i];
        }
        
    }

    void printName()
    {
        cout<<"your name: "<< firstName << endl;
    }
};

int main()
{
    int maxSize{};
    cout << "give max nr: ";
    cin >> maxSize;
    Name yourName {maxSize};
    char* userInput{};
    cout << "write your name: ";
    cin >> userInput[maxSize];
    yourName.setName(userInput);
    yourName.printName();
    
    
    return 0;
}
