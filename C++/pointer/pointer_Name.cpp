
// 指针变量的定义和使用

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 10; //普通变量
    int *a1;    //定义了一个指针变量但是为初始化赋值
    int b = 10;
    int *p = &b; //定义了一个指针变量并将整型变量b,指针变量p指向b的地址
    cout << p << endl;
    // cout << &p << endl;
    cout << *p << endl;

    system("pause");
    return 0;
}
