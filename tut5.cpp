//User Input
#include <iostream>
using namespace std; //std means standard
int main()
{
    int num1, num2;
    cout << "Enter the value of num1:\n"; // "<<" this is called insertion operator
    cin >> num1;                          //">>" is called Extraction operator

    cout << "Enter the value of num2:\n";
    cin >> num2;

    cout << "sum is: " << num1 + num2;
    return 0;
}