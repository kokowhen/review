#include <iostream>
#include <string>
using namespace std;

// 测试一维数组作为函数参数传递

void test1(int a1[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << a1[i] << endl;
    }
}

// 测试二维数组作为函数参数传递

void test2(int b1[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b1[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int a[3] = {1, 2, 3};
    test1(a);

    int b[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };
    test2(b);

    system("pause");
    return 0;
}
