#include <bits/stdc++.h>
using namespace std;
template <class T>
class Arijit
{
public:
    T data;
    Arijit(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Arijit<T>::display()
{
    cout << data<<endl;
}
void func(int a)
{
    cout<<"I am exact matched func() "<<a<<endl;
}

template<class T>
void func(T a)
{
    cout<<"I am templatized func()"<<a<<endl;
}
int main()
{
    Arijit <int> h(56);
    // cout<<obj.data<<endl;
    h.display();
    func<int>(4);
    func(4);//exact match takes the highest priority
    return 0;
}