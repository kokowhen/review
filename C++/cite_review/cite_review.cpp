#include <iostream>
#include <string>
using namespace std;

// 引用做函数参数传递，效果和地址传递一样，但是表达更清晰

void swap(int &d1, int &d2)
{
    int tem;
    tem = d1;
    d1 = d2;
    d2 = tem;

    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;
}

int main()
{
    // 复习常量指针，指针指向可以修改，指针指向的值不可以改
    int a1 = 100;
    int a2 = 200;
    const int *p1 = &a1;
    p1 = &a2;
    // *p1 = a2;
    cout << *p1 << endl; // 指针的值通过改变指向改变了

    // 复习指针常量，指针指向不可以修改，指针指向的值可以修改
    int b1 = 300;
    int b2 = 400;
    int *const p2 = &b1;
    // p2 = &b2;
    *p2 = b2;
    cout << *p2 << endl; // 指针的值通过改变指针指向的值改变了

    // 引用的本质：指针常量，引用在初始化后不可更改
    int c1 = 1000;
    int c2 = 2000;
    int &c = c1;    // 自动转换为 int *const c = &c1;
    // int &c = c2; // 引用在初始化后不可更改
    cout << c << endl;

    // 引用做函数参数传递
    int d1 = 50;
    int d2 = 500;
    swap(d1, d2);

    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;

    system("pause");
    return 0;
}
