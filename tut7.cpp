#include <iostream>
using namespace std;
int c = 45;
int main()
{
    int a, b, c;
    cout << "Enter the value of a :" << endl;
    cin >> a;

    cout << "Enter the value of b :" << endl;
    cin >> b;
    c = a + b;
    cout << "sum of a and b is :" << c << endl;

    // cout << "global c is : " << c; Wrong Implementation of global variable so
    cout << "global c is : " << ::c << endl; // Proper implementation of global varible
    // "::" -> It is called scope resulution operator for calling global varible

    float d = 34.5f;
    long double e = 34.4;
    cout << "The value of  d is " << d << endl
         << "The value of e is " << e;

    cout << "The size of 34.4 is: " << sizeof(34.4f);

    // Refernce Variable
    float x = 455;
    float &y = x; // "&" --> Syntax of refernce variable
    cout << x << endl;
    cout << y << endl;

    //Type casting
    //It means change one datatypes to another like int to float
    int k = 46;
    cout << "The value of a is: " << float(k);

    //for an example
    int f = 45;
    float g = 45.46;
    cout << "The expression is : " << f + g << endl;
    cout << "After type casting The expression is: " << f + int(g) << endl;

    return 0;
}
