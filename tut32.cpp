#include <iostream>
using namespace std;

class Simple
{
    int a, b, c;

public:
    Simple(int X, int Y, int Z)
    {
        a = X;
        b = Y;
        c = Z;
    }

    void printdata();
};
void Simple ::printdata()
{
    cout << "a : " << a << ", b: " << b << ", c: " << c;
}
int main()
{
    Simple s(2, 3, 4);
    s.printdata();
    return 0;
}