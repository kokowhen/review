// new关键字和delete关键字

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 在堆区开辟整型变量
    int *a1 = new int(100);
    int *a2 = new int(200);
    cout << a1 << endl;
    cout << a2 << endl;

    // 释放整型变量的内存
    delete a1;
    cout << a1 << endl;

    // 在堆区开辟数组
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 100 + i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << &arr[i] << endl;
    }

    // 释放堆区数组的内存
    delete[] arr;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    int a11 = 100;
    int a12 = 200;
    cout << &a11 << endl;
    cout << &a12 << endl;

    system("pause");
    return 0;
}
