#include <iostream>
using namespace std;
struct number
{
    int a, b;
};
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    number a;
    a.a = 5;
    a.b = 9;
    swap(a.a, a.b);
    cout << "after swap = " << a.a << " " << a.b;
    return 0;
}
