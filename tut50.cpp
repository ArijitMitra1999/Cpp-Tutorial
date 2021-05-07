#include <iostream>
using namespace std;
int main()
{
    //Basic Example
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is = " << *(ptr) << endl;
    //new keyword and operator
    //Dynamic memory allocation
    int *p = new int(40);
    cout << "value is: " << *p << endl;

    int *arr = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    cout << "The value of arr[0] is: " << arr[0] << endl;

    //delete keyword
    delete[] arr;
    //It gives random number as memory is free
    cout << "The value of arr[0] is: " << arr[0] << endl;

    return 0;
}