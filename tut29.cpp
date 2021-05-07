#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);

    void printdata()
    {
        cout << "After taking value: " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(void)
{
    cout << "Enter the number of a and b : " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
}
int main()
{
    Complex c1;
    c1.printdata();
    return 0;
}