#include <iostream>
using namespace std;
class Number
{
private:
    int a;

public:
    Number() {} //Need to make default constructor otherwise this program throws error
    Number(int Num)
    {
        a = Num;
    }
    Number(Number &obj)
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
    void Display()
    {
        cout << "The number is: " << a << endl;
    }
};
int main()
{
    Number x(5), y(6), z(7);
    x.Display();

    Number z1(x);
    z1.Display();

    return 0;
}