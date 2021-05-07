#include<bits/stdc++.h>
using namespace std;
// template<class T>
void display(vector<string> &v)
{
    vector<string>:: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    vector<string> vec;

    for (int i = 0; i < 5; i++)
    {
        string c;
        cin >> c;
        vec.push_back(c);
    }
    vector<string>::iterator it = vec.begin();

    vec.insert(it, "Arijit");

    display(vec);
}
