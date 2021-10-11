// 三种创建结构体变量的方法

#include <iostream>
#include <string>
using namespace std;

// 定义结构体Student

struct Student
{
    string name;
    string gender;
    int age;
} stu3;

int main()
{
    // 创建结构体变量
    // way 1
    Student stu1;
    stu1.name = "Jeffery";
    stu1.gender = "male";
    stu1.age = 23;
    cout << "name:" << stu1.name << "\t"
         << "gender:" << stu1.gender << "\t"
         << "age:" << stu1.age << endl;

    // way 2
    Student stu2 = {"Jacky", "male", 32};
    cout << "name:" << stu2.name << "\t"
         << "gender:" << stu2.gender << "\t"
         << "age:" << stu2.age << endl;

    // way 3
    stu3.name = "Jay";
    stu3.gender = "male";
    stu3.age = 40;
    cout << "name:" << stu3.name << "\t"
         << "gender:" << stu3.gender << "\t"
         << "age:" << stu3.age << endl;

    system("pause");
    return 0;
}
