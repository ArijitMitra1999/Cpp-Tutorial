#include <iostream>
using namespace std;
//Call by reference //Using Pointer
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int a = 20, b = 30;
//     swap(&a, &b);
//     cout << "A is: " << a << endl
//          << "B is: " << b;
//     return 0;
// }

//Another method

void swap(int &c, int &d)
{
    int temp = c;
    c = d;
    d = temp;
}
int main()
{
    int a = 2, b = 3;
    swap(a, b); // here a = c and b = d
    cout << "After Swap: " << a << " & " << b << endl;
    return 0;
}