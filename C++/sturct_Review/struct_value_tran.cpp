// 结构体做函数参数传递

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

// 结构体做函数参数值传递的方式

void printInfo1(Student rec)
{
    rec.age = 24;
    cout << "name:" << rec.name << "\t"
         << "gender:" << rec.gender << "\t"
         << "age:" << rec.age << endl;
}

// 结构体做函数参数地址传递的方式

void printInfo2(Student *p1)
{
    p1->age = 24;
    cout << "name:" << p1->name << "\t"
         << "gender:" << p1->gender << "\t"
         << "age:" << p1->age << endl;
}

int main()
{
    Student stu1;
    stu1.name = "Jeffery";
    stu1.gender = "male";
    stu1.age = 23;

    // 值传递的方式传递实参
    cout<<"printInfo1 function"<<endl;
    printInfo1(stu1);

    cout<<"main function"<<endl;
    cout << "name:" << stu1.name << "\t"
         << "gender:" << stu1.gender << "\t"
         << "age:" << stu1.age << endl;

    // 地址传递的方式传递实参
    cout<<"printInfo2 function"<<endl;
    printInfo2(&stu1);
    cout<<"main function"<<endl;
    cout << "name:" << stu1.name << "\t"
         << "gender:" << stu1.gender << "\t"
         << "age:" << stu1.age << endl;

    system("pause");
    return 0;
}
