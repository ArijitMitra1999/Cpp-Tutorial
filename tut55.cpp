#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
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
    base_class_pointer = &obj_derived; //pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    //Using base class pointer we can't acess derived class

    DerivedClass *derive_class_pointer;
    derive_class_pointer = &obj_derived;
    derive_class_pointer->var_derived = 135;
    derive_class_pointer->display();
    return 0;
}