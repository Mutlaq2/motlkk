#include <iostream>
using namespace std;

int main ()
{
  int firstvalue=10;
  int * mypointer;

  mypointer = &firstvalue;
   
  cout << "Address of a Pointer : " << mypointer << '\n';
  cout << "Value of Pointer : " << *mypointer << '\n';
  return 0;
}