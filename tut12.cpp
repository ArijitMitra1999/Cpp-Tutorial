#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Pointer: data types which holds the address of another datatypes
    int a = 3;
    int *b = &a; // *b holds address of a and we store address through &a

    //& --> (address of) operator
    cout << "It Prints Address of a : " << b << endl;
    cout << "It Prints Address of a : " << &b << endl;

    // * --> (value at) Operator
    cout << "It Prints value of a : " << *b << endl;

    //Pointer to pointer
    int **c = &b;
    cout << "address of b is : " << c << endl;
    cout << "value of b is : " << **c;
    return 0;
}