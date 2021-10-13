// 创建一个学生类

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    // 属性
    string name;
    string gender;
    int age;

    // 输出学生信息
    void printInfo()
    {
        cout << "name:" << name << "\t"
             << "gender:" << gender << "\t"
             << "age:" << age << endl;
    }
};

int main()
{
    // 创建一个学生类的实例
    Student stu1;
    stu1.name = "Jeffery";
    stu1.gender = "male";
    stu1.age = 24;
    stu1.printInfo();

    system("pause");
    return 0;
}
