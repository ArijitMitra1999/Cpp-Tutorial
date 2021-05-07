#include <bits/stdc++.h>
using namespace std;
int i = 1;
int main()
{
    // For Loop

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout << i << endl;
    // }

    //While Loop

    // int i = 1;
    // while (i < 40)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // return 0;

    //Do While Loop
    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 40);

    //QUIZ
    int i = 2;
    //DO It Using Global
    do
    {
        cout << ::i * 1 << endl;
        ::i++;
    } while (::i <= 10);
}