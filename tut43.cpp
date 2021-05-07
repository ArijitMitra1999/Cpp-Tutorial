#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you ?" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise Ho ?" << endl;
    }
};
class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base1::greet(); //For Ambiguity Resolution I Use ::
    }
};
int main()
{
    Base1 B;
    B.greet();
    Derived Der;
    Der.greet();
    return 0;
}