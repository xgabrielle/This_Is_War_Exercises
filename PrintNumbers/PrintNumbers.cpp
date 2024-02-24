#include <iostream>
using namespace std;

void printOutPtr( int*number)
{
    cout<< *number<<endl;
 
}
int main()
{
    int number = 6;
    printOutPtr(&number);
    int userNumber{};
    cout << "print your own number: "<<endl;
    cin >> userNumber;
    printOutPtr(&userNumber);
    

    return 0;
}
