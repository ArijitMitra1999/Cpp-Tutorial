#include <iostream>
#include <iomanip> //for using manipulator
using namespace std;
int main()
{
    // int a = 34;
    // cout << "The value of a was: " << a << endl;
    // a = 45; // a value is changing
    // cout << "The value of a is: " << a << endl;

    //contants in c++
    // const int a = 34; // but it's fixed you can't change
    // cout << "The value of a was: " << a << endl;
    // a = 65; // it will throws a error bcz a is constant
    // cout << "The value of a was: " << a << endl;

    int a = 3, b = 78, c = 123;
    //We use a function called setw is comming from iomanip
    cout << "the value of a is using setw: " << setw(4) << a << endl;
    // cout << "the value of a is: " << a << endl;
    cout << "the value of b is using setw: " << setw(4) << b << endl;
    cout << "the value of c is using setw: " << setw(4) << c << endl;
    /*setw manipulator sets the width of the filed assigned for the output. The field width determines the minimum number of characters to be written in some output representations. ... setfill character is used in output insertion operations to fill spaces when results have to be padded to the field width.*/

    return 0;
}