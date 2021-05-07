#include <iostream>
using namespace std;
void g(); //Protoype
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << sum(num1, num2) << endl;
    g();
    return 0;
}
void g()
{
    cout << "Good Morning" << endl; //Without prototype it gives us error because we declare g() after main
    //Void doesn't return anything
}
