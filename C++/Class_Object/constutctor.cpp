// 构造函数的分类及调用

#include <iostream>
#include <string>
using namespace std;

// 创建一个Person类

class Person
{
public:
    // 创建一个默认（无参）构造函数
    Person()
    {
        cout << "default constructor!" << endl;
    }

    // 创建一个有参构造函数
    Person(int age)
    {
        mAge = age;
        cout << "parameterized constructor!" << endl;
    }

    // 创建一个拷贝构造函数
    Person(const Person &p)
    {
        cout << "cpoy constructor!" << endl;
        mAge = p.mAge;
    }

    // 创建一个析构函数
    ~Person()
    {
        cout << "dectructor!" << endl;
    }

public:
    // 添加类的属性
    int mAge;
};

// 测试函数，调用之前的构造函数和析构函数

void test()
{
    // Person p1;  // 会调用默认构造函数和析构函数
    Person p2(10); // 会调用有参构造函数和析构函数
    int age = 100;
    Person p3(age);
    cout << p3.mAge << endl;
    Person p4(p3); // 会调用拷贝构造函数
}

int main()
{
    test();

    system("pause");
    return 0;
}
