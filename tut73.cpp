#include <iostream>
#include <string>
#include <map>
using namespace std;

void display(map<string, int> &m)
{
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << "\n";
    }
}

//map is an associative array
int main()
{
    map<string, int> marksmap;
    marksmap["Arijit"] = 98;
    marksmap["prayash"] = 58;

    //Insert Function
    marksmap.insert({{"Sayandeep", 56}, {"Nilanjan", 45}});

    //Display Result
    // map <string, int> :: iterator iter = marksmap.begin();
    // for(iter = marksmap.begin(); iter!= marksmap.end(); iter ++)
    // {
    //     cout<<(*iter).first<<" : "<<(*iter).second<<"\n";
    // }

    // This for loop and display function is same
    display(marksmap);

    cout << "Size of map: " << marksmap.size() << endl;
    cout << "Max size of map: " << marksmap.max_size() << endl;
    cout << "The empty return value: " << marksmap.empty() << endl;

    return 0;
}