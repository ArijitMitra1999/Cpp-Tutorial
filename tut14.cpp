#include <iostream>
using namespace std;
//Structure Creation

struct employee
{
    int id;
    char favchar;
    float salary;
};

// typedef struct employee
// {
//     int id;
//     char favchar;
//     float salary;
// } ep;

//Union
union money
{
    int rice;
    char car;
    float salary;
};

int main()
{
    employee harry;
    // ep harry; // using typedef
    harry.id = 1;
    harry.favchar = 'c';
    harry.salary = 120000;
    cout << harry.favchar << endl;

    money m1;
    m1.rice = 34;
    // m1.car = 'c'; //It provides garbage value bcz union took at a time one value
    cout << m1.rice;

    return 0;
}