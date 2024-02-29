#include<iostream>
using namespace std;

class my_class
{
    int age;
    string name;
public:
    my_class()
    {
        name = "someone's name";
    }
    my_class(const string& animalType)
    {
       name = animalType;
    }

    const string print()
    {
        return name;
    }
};
int main()
{
    my_class myClass1;
    cout << myClass1.print()<<endl;
    my_class myClass("cat");
    cout<< myClass.print();
    return 0;
}
