// 结构体指针

#include <iostream>
#include <string>
using namespace std;

// 定义一个Student结构体

struct Student
{
    string name;
    string gender;
    int age;
};

int main()
{
    // 创建一个结构体变量
    Student stu1;
    stu1.name = "Jeffery";
    stu1.gender = "male";
    stu1.age = 18;

    // 创建一个指针变量
    Student *p1 = &stu1;
    p1->age = 24;

    // 访问结构体变量的值
    cout << "name:" << p1->name << "\t"
         << "gender:" << p1->gender << "\t"
         << "age:" << p1->age << endl;

    // 创建第二个结构体变量
    Student stu2 = {"Jacky", "male", 32};

    // 创建第二个指针变量
    Student *p2 = &stu2;
    p2->gender = "female";

    // 访问结构体变量的值
    cout << "name:" << p2->name << "\t"
         << "gender:" << p2->gender << "\t"
         << "age:" << p2->age << endl;

    cout << "p1's address is:" << p1 << endl;
    cout << "p2's address is:" << p2 << endl;

    system("pause");
    return 0;
}
