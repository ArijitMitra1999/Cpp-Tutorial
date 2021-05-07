#include <bits/stdc++.h>
using namespace std;
class Amstrong
{
private:
    int num, originalNum, remainder, n = 0, result = 0, power;

public:
    void ams(void);
};
void Amstrong ::ams()
{
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        // pow() returns a double value
        // round() returns the equivalent int
        power = round(pow(remainder, n));
        result += power;
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
}
int main()
{
    Amstrong a;
    int user;
    cout << "How many times do you want to check this validation? \nAns: ";
    cin >> user;
    for (int i = 0; i < user; i++)
    {
        a.ams();
    }
    return 0;
}