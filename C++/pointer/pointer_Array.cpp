// 利用指针访问数组中的元素

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 定义一个一维数组
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = a;
    // cout << p << endl;
    // cout << *p << endl;
    // p += 1;
    // cout << p << endl;
    // cout << *p << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << *p << endl;
        p++;
    }

    system("pause");
    return 0;
}
