#include <bits/stdc++.h>
using namespace std;
//Display function
void display(vector<int> &v)
{
    vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << " ";
    }

    //Both the for loop are same

    // for(int i = 0 ; i < v.size(); i ++)
    // {
    //     // cout<<v[i]<<" ";

    //     //Both two are same
    //     cout<<v.at(i)<<" ";
    // }
    cout << endl;
}

int main()
{
    vector<int> vec1;

    // vector <char> vec2(3);
    // vector <char> vec3(vec2);
    vector<int> vec4(6, 3); //this vector prints 6 times 3

    int e, size;
    cout << "Enter the size of your vector: \n";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " number elemet: ";
        cin >> e;
        vec1.push_back(e);
    }

    // //vector clear
    // vec1.clear();

    // //Insert Function

    // vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,566);

    // vec1.pop_back(); //last element out

    // //Calling display function
    display(vec1);
    display(vec4);
    return 0;
}