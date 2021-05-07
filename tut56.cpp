#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "Displying base class varible: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displying derived class varible: " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_base;
    base_class_pointer->display();
    return 0;
}