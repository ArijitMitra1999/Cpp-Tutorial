#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks[4] = {23, 45, 96, 78};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    //Another process of storing array
    int mathmarks[4];
    mathmarks[0] = 2696;
    mathmarks[1] = 256;
    mathmarks[2] = 46;
    mathmarks[3] = 36;

    // cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;

    //Array Print using For loop

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "the value of marks is: " << i << " is " << marks[i] << endl;
    // }

    //Using While loop

    // int i = 0;
    // while (i < 4)
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // }

    //Using Do While loop

    // int i = 0;
    // do
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // } while (i < 4);

    //Pointers in arrays
    int *p = marks;                            //here *p is pointer variable and stores al the values of marks
    cout << "marks[0] : " << *p << endl;       // it prints 1st value of marks
    cout << "marks[1] : " << *(p + 1) << endl; // it prints 2nd value of marks

    return 0;
}