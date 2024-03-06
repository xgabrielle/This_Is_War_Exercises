#include <iostream>
using namespace std;
/*
 * Create an array that can hold ten integers, and get input from user.
 * Display those values on the screen, and then prompt the user for an
 * integer. Search through the array, and count the number of times the
 * item is found.
 */

/*
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
*/


/*Write a program that asks for an index and a number.
 *Then it includes the number at the indicated index of
 *the array ={1,2,3,4,5,6} and moves a position
 *forward (from u to u+1) each element after the selected index.*/

int arr[]{1,2,3,4,5,6};
void NumberProgram( int ind, int num)
{
 int index=ind;
 int number =num;
 
 for (int i=6; i>ind;i--)
 {
  arr[i]=arr[i-1];
 }
 arr[ind]=num;
 for (int i =0;i<=6;i++)
 {
  cout<<arr[i]<<endl;
 }
 
}
int main()
{
 int indexN{};
 cout<<"Give a index number between 1-6: ";
 cin>>indexN;

 int number{};
 cout<<"Give a number: ";
 cin>>number;
 NumberProgram(indexN,number);
}

