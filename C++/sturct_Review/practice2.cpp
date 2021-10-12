// 设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。

// 通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。

#include <iostream>
#include <string>
using namespace std;

// 创建英雄结构体

struct Hero
{
    string name;
    int age;
    string gender;
};

// 冒泡排序函数

void bubbleSort(Hero hero[], int len)
{
    Hero tem; // 创建一个临时hero变量存放冒泡的hero变量
    // 轮数
    for (int i = 0; i < len; i++)
    {
        // 次数
        for (int j = 0; j < len - i - 1; j++)
        {
            if (hero[j].age > hero[j + 1].age)
            {
                tem = hero[j + 1];
                hero[j + 1] = hero[j];
                hero[j] = tem;
            }
        }
    }
}

// 打印函数

void printInof(Hero hero[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << hero[i].name << "\t" << hero[i].gender << "\t" << hero[i].age << endl;
    }
}

// 主函数

int main()
{
    Hero hero[5] = {
        {"A", 23, "male"},
        {"B", 18, "famale"},
        {"C", 24, "female"},
        {"D", 19, "male"},
        {"E", 24, "female"},
    };
    int len = sizeof(hero) / sizeof(Hero); // 数组的长度

    bubbleSort(hero, len);
    printInof(hero, len);

    system("pause");
    return 0;
}
