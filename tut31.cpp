#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Constructor overloading
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printnum()
    {
        cout << "a: " << a << " & "
             << "b: " << b << endl;
    }
};
int main()
{
    //Object Creation
    int a, b;
    cin >> a >> b;
    Complex c1(a, b);
    c1.printnum();

    Complex c2(a);
    c2.printnum();
    return 0;
}