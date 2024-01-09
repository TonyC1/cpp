// This program demonstrates the string class.
#include <iostream>
#include <string> // Required for the string class.
using namespace std;


int g1 = 1;
int g2 = 1;

void f1()
{
    cout << "..... in f1 ...." << endl;
    int g1 = 2;
    int l = 2;
    cout << "local g1: " ;
    cout << g1 << endl;
    cout << "g2: ";
    cout << g2 << endl;
    cout << "local: ";
    cout << l << endl;
}


int main ()
{
    // string mystring = "This is a string";
    // cout << mystring[2] << endl;

    f1();
    cout << "main g1 :";
    cout << g1 << endl;
    return 0;
}
