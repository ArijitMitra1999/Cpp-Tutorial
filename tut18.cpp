#include <iostream>
using namespace std;
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    //Factorial of a number
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial is: " << fact(n);
    return 0;
}