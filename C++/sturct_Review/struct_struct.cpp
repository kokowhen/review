// 结构体嵌套

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

// 定义一个Teacher结构体

struct Teacher
{
    string name;
    string gender;
    int id;
    Student stu;
};

int main()
{
    // 创建一个tea1结构体变量
    Teacher tea1;
    tea1.name = "Mr.Wang";
    tea1.gender = "female";
    tea1.id = 001;
    tea1.stu.name = "Jeffery";
    tea1.stu.gender = "male";
    tea1.stu.age = 23;

    // 打印相关信息
    cout << "teacher's name is:" << tea1.name << "\t"
         << "teacher's gender is:" << tea1.gender << "\t"
         << "teacher's id is:" << tea1.id << endl;
    cout << "student's name is:" << tea1.stu.name << "\t"
         << "student's gender is:" << tea1.stu.gender << "\t"
         << "student's age is:" << tea1.stu.age << endl;

    system("pause");
    return 0;
}
