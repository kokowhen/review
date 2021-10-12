#include <iostream>
#include <string>
using namespace std;

void addNum1(int a1)
{
    int b = 20;
    a1 = b;
    cout << "a1 = " << a1 << endl;
}

void addNum2(int *a2)
{
    int b = 20;
    *a2 = b;
    cout << "a2 = " << *a2 << endl;
}

int main()
{
    int a = 10;

    addNum1(a);
    cout<<"a = "<<a<<endl;

    addNum2(&a);
    cout << "a = " << a << endl;

    system("pause");
    return 0;
}
