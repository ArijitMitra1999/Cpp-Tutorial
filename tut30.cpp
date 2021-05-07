#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);

    void printdata()
    {
        cout << "After Adding: " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    Complex c1(5, 6); // Implicit Call
    /*Both the call are same*/
    Complex c2 = Complex(7, 8); //   Explicit call
    c1.printdata();
    c2.printdata();
    return 0;
}