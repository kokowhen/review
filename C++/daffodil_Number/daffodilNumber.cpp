#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// 找出所有水仙花数

void daffodilNumber()
{
    // 遍历所有三位数
    cout << "All daffodil number is:" << endl;

    for (int i = 100; i < 1000; i++)
    {
        if ((pow((i % 10), 3) + pow((i / 10 % 10), 3) + pow((i / 100 % 10), 3)) == i)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    daffodilNumber();

    system("pause");
    return 0;
}
