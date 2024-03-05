#include <iostream>
using namespace std;
/*
 * Create an array that can hold ten integers, and get input from user.
 * Display those values on the screen, and then prompt the user for an
 * integer. Search through the array, and count the number of times the
 * item is found.
 */

int main()
{
 int sum[10];
 cout<<"Write 10 numbers: \n";
 for (int i =0; i<10;i++)
 {
  cin>>sum[i];
 }
 
 cout<<"numbers\n";
 for (int i =0; i<10;i++)
 {
  cout <<sum[i]<<endl;
 }
 int userNumber{};
 cout<<"Write a number\n";
 cin>> userNumber;
 
 
 int match{};
 for (int i=0; i<10;i++)
 {
  if (userNumber==sum[i])
  {
   match++;
  }
 }
 cout<<"This many matches "<<match<<endl;
 
}

