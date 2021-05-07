#include <bits/stdc++.h>
using namespace std;
template <class T1, class T2, class T3>
class temp
{
public:
    T1 a;
    T2 b;
    T3 c;
    temp(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main()
{
    temp <int , float, float> obj(5,6.0,2.3);
    obj.display();
    return 0;
}