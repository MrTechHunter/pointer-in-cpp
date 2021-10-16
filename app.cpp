#include <iostream>

using namespace std;

int main()
{
    string sth = "something";
    string* my_pointer = &sth //A pointer variable that stores the address of sth
   cout << "Value of sth variable" << endl; 
   cout << "The memory address of sth variable with the pointer" << endl; 
   return 0;
}