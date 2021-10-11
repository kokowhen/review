/*
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

- 设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

- 学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

- 最终打印出老师数据以及老师所带的学生数据
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 定义一个学生结构体

struct Student
{
    string Sname;
    int score;
};

// 定义一个老师结构体

struct Teacher
{
    string Tname;
    Student stuArr[5]; // 存放5个学生的数组
};

void addInfo(Teacher teaRec[], int len)
{
    // 初始化老师和学生的姓名信息，利用随机数种子生成
    string tName = "Teacher";
    string sName = "Student";
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        teaRec[i].Tname = tName + nameSeed[i];
        for (int j = 0; j < 5; j++)
        {
            teaRec[i].stuArr[j].Sname = sName + nameSeed[j];
            teaRec[i].stuArr[j].score = rand() % 61 + 40;
        }
    }
}

// 打印函数

void printInfo(Teacher teaArr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << teaArr[i].Tname << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << teaArr[i].stuArr[j].Sname << "\t" << teaArr[i].stuArr[j].score << endl;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    // 创建数组存放三名老师
    Teacher teaArr[3];
    int len = sizeof(teaArr) / sizeof(Teacher); // 计算数组的长度
    addInfo(teaArr, len);

    printInfo(teaArr, len);

    system("pause");
    return 0;
}
