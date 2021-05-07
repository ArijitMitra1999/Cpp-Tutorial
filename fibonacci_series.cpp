// #include <iostream>
// using namespace std;

// void fibo()
// {
//     int x = 0, y = 1, user, z;
//     cout << "Enter a number" << endl;
//     cin >> user;
//     cout << x << " " << y << " ";
//     for (int i = 2; i < user; ++i)
//     {
//         z = x + y;
//         cout << z << " ";
//         x = y;
//         y = z;
//     }
// }
// int main()
// {
//     fibo();
//     return 0;
// }

//Using Recursion
#include <iostream>
using namespace std;
int fib(int x)
{
    if ((x == 1) || (x == 0))
    {
        return (x);
    }
    else
    {
        return (fib(x - 1) + fib(x - 2));
    }
}
int main()
{
    int x, i = 0;
    cout << "Enter the number of terms of series : ";
    cin >> x;
    cout << "\nFibonnaci Series : ";
    while (i < x)
    {
        cout << " " << fib(i);
        i++;
    }
    return 0;
}