#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Tell me your Age: " << endl;
    cin >> age;
    //Selection Control Structure as If else
    if ((age < 18) && (age > 0))
    {
        cout << "You can't come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "You are a kid and you will get a kid pass to the party" << endl;
    }
    else if (age < 1)
    {
        cout << "you are not yet born" << endl;
    }
    else
    {
        cout << "You can come to the party" << endl;
    }

    //Selection Control Stucture using Switch case
    switch (age)
    {
    case 18:
        /* code */
        cout << "You are 18";
        break;

    case 22:
        /* code */
        cout << "You are 22";
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }
    return 0;
}