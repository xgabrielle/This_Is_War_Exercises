#include <iostream>
using namespace std;


void getNumbers(int arrayNumbers)
{
    
    for (int i =0; i<4;i++)
    {
        cout << "write 4 numbers: ";
        cin>>arrayNumbers;
    } 
}
int printNumbers ()
{
    int numbers[4];
    for (int i =0; i<4;i++)
    {
        cout<< numbers[i]<<endl;
    }
    return *numbers;
}
int main()
{
    int numbers[4];
    
    getNumbers(numbers[4]);
    cout << "Your numbers: "<<endl;
    printNumbers();
    
    return 0;
}
