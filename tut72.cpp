#include <iostream>
#include <list>
using namespace std;
void display(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l1; //list of 0 length

    l1.push_back(5);
    l1.push_back(7);
    l1.push_back(1);
    l1.push_back(9);
    l1.push_back(12);

    //remove any element
    // l1.remove(9);

    //delete element from front
    // l1.pop_front();

    //delete element from back
    // l1.pop_back();

    //sorting the list
    l1.sort();
    display(l1);

    list<int> l2(3); // emply list of size 7;
    list<int>::iterator iter = l2.begin();

    for (int i = 0; i < 3; i++)
    {
        int s;
        cin >> s;
        *iter = s;
        *iter++;
    }
    // *iter = 45;
    // *iter++;
    // *iter = 49;
    // *iter++;
    // *iter = 53;
    // *iter++;
    display(l2);

    //Merge two list
    cout << "List's Marging: \n";
    l1.merge(l2);
    display(l1);

    //Reversing a list
    l1.reverse();
    display(l1);
    return 0;
}