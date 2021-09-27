#include <iostream>
#include <string>
using namespace std;

// 数组元素的逆置

void PrintArray(int reciver1[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << reciver1[i] << "\t";
    }
}

void ArrayReverse(int reciver2[])
{
    int R_array[5];

    // 初始化数组

    for (int i = 0; i < 5; i++)
    {
        R_array[i] = 0;
    }

    // 逆置数组

    for (int i = 0, j = 4; i < 5, j >= 0; i++, j--)
    {
        R_array[i] = reciver2[j];
    }

    // 打印结果

    for (int i = 0; i < 5; i++)
    {
        cout << R_array[i] << "\t";
    }
}

int main()
{

    int arr[5] = {1, 3, 2, 5, 4};
    PrintArray(arr);
    cout << endl;
    ArrayReverse(arr);

    cout << endl;
    system("pause");
    return 0;
}
