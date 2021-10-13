// 构造函数和析构函数：用于对象的初始化和清理

#include <iostream>
#include <string>
using namespace std;

// 创建一个Person类

class Person
{
public:
    // 定义一个构造函数
    Person()
    {
        cout << "constructor" << endl;
    }

    // 定义一个析构函数
    ~Person()
    {
        cout << "destructor" << endl;
    }
};

// 测试函数，调用（无参）构造函数和析构函数

void test()
{
    Person per1;
}

int main()
{
    test();

    system("pause");
    return 0;
}
