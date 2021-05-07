#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the Id" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "Id of this employee is: " << id << endl;
        // cout << "Employee number: " << count << endl;
    }

    static void getcount()
    {
        cout << "The Value of count is: " << count << endl;
    }
};
//It is static data member of employee
int Employee ::count = 1; // Default value is zero
int main()
{

    Employee Ari, rohan, lavesh;
    Employee::getcount(); //Using Scope resolution operator coz it's a static function
    Ari.setdata();
    Ari.getdata();

    Employee::getcount();
    rohan.setdata();
    rohan.getdata();

    Employee::getcount();
    lavesh.setdata();
    lavesh.getdata();
    return 0;
}