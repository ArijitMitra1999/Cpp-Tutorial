#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cout << "how many input do you wamt?" << endl;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    for (int i = s - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}