#include <iostream>
using namespace std;

class Complex
{
    int v1, v2;
    friend Complex morefunc(Complex c, Complex d);

public:
    void setval(int x, int y)
    {
        v1 = x;
        v2 = y;
    }
    void printval()
    {
        cout << v1 << " + " << v2 << "i" << endl;
    }
};

Complex morefunc(Complex c, Complex d)
{
    Complex val;
    val.setval((c.v1 + d.v1), (c.v2 + d.v2));
    return val;
}
int main()
{
    Complex c1, c2, c3;
    c1.setval(2, 3);
    c1.printval();

    c2.setval(4, 5);
    c2.printval();

    c3 = morefunc(c1, c2);
    c3.printval();

    return 0;
}