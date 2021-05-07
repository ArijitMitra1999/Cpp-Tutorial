#include <iostream>
using namespace std;

int main()
{
    int prime;
    cout << "enter a number: " << endl;
    cin >> prime;
    bool flag = true;
    for (int i = 2; i < prime; i++)
    {
        if (prime % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "It is Prime Number";
    }
    else
    {
        cout << "It is not prime number";
    }
    return 0;
}