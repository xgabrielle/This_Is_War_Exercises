#include <vector>
#include <string>
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
    // vector in C++ is the same as List in C#
    vector<string> names{}; 
    names.push_back("Marc");
    names.push_back("Daniel");
    names.push_back("René");
    names.push_back("ABC");

    auto iterator = names.begin();
    if(iterator != names.end())
    {
        cout << *iterator << "\n";
        // to move the iterator forward:
        ++iterator;
    }
}