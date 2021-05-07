#include <bits/stdc++.h>
using namespace std;

template<class T1, class T2, class T3>
T3 funcAverage(T1 a, T2 b)
{
    T3 avg = (a+b)/2.0;
    return avg;
}
template<class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b= temp;
}
// int funcAverage(int a, int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a, int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }
int main()
{
    float avg = funcAverage<int, int, float>(5,2.4);
    cout<<"Average of these numbers are: "<<avg<<endl;
    
    int x = 5, y = 3;
    swapp(x, y);
    cout<<x<< " "<<y;

    return 0;
}