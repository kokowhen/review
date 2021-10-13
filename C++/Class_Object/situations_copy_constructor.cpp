// 什么时候拷贝构造函数会被调用？

#include<iostream>
#include<string>
using namespace std;

// 创建一个Person类

class Person
{
    public:

    // 创建一个有参构造函数
    Person(int age)
    {
        age = mAge;
    }

    // 创建一个拷贝构造函数
    Person(const Person &p)
    {
        cout<<"copy constructor!"<<endl;
        mAge = p.mAge;
    }

    int mAge;
};

// 拷贝构造函数会被调用的第1种情况：使用一个已经创建完毕的对象来初始化一个新对象
void test()
{
    Person p1(100);
    Person p2(p1);
}

// 拷贝构造函数会被调用的第2种情况：值传递的方式给函数参数传值
void test1(Person p1)
{
    cout<<"hello"<<endl;
}

void test2()
{
    Person p(20);
    test1(p);
}

int main()
{
    test();
    Person b(50);
    test1(b);
    // test2();
    
    system("pause");
    return 0;
}
