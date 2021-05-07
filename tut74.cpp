#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    // Function Object (Functor) : Function wrapped in a class so that it available like an object
    int arr[] = {1, 3, 12, 84, 77, 98};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size, greater<int>());
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}