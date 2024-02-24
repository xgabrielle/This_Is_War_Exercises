#include <iostream>
using namespace std;

class ArraysOfNumbers
{
    int numbers[4];
public:
    
    void getNumbers()
    {
        for (int i =0; i<4;i++)
        {
            cout << "write 4 numbers: ";
            cin>>numbers[i];
        } 
    }
    void printNumbers ()
    {
        for (int i =0; i<4;i++)
        {
            cout<< numbers[i]<<endl;
        }
    }
};
int main()
{
    ArraysOfNumbers arrayNrs;
    arrayNrs.getNumbers();
    cout << "Your numbers: "<<endl;
    arrayNrs.printNumbers();
    
    return 0;
}

