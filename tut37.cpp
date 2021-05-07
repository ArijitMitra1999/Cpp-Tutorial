#include <iostream>
using namespace std;
//Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    Employee() {}
};
class Programmer : public Employee
{
public:
    string language;
    Programmer(int inpid)
    {
        id = inpid;
        language = "cpp";
    }
};
int main()
{
    Employee harry(1);
    cout << harry.salary << endl;
    Programmer arijit(1);
    cout << arijit.id << endl;
    cout << arijit.language << endl;
    return 0;
}