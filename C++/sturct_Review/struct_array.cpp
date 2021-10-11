// 结构体数组

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
    // 创建结构体变量并存放在数组中
    Student arr[3] = {
        {"Jeffery", "male", 23},
        {"Jacky", "male", 32},
        {"Nacy", "female", 22}};
    for (int i = 0; i < 3; i++)
    {
        cout << "name:" << arr[i].name << "\t"
             << "gender:" << arr[i].gender << "\t"
             << "age:" << arr[i].age << endl;
    }

    system("pause");
    return 0;
}
