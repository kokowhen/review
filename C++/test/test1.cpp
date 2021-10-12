// 验证值传递的方式冒泡排序子函数排序完成后主函数的数组变化了吗

#include <iostream>
#include <string>
using namespace std;

// 冒泡排序函数
void bubbleSort(int arr1[], int len)
{
    int tem;
    arr1[5] = 100;
    // 轮数
    for (int i = 0; i < len - 1; i++)
    {
        // 每一轮的次数
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                tem = arr1[j + 1];
                arr1[j + 1] = arr1[j];
                arr1[j] = tem;
            }
        }
    }
    // 在冒泡排序函数中打印排序好的数组
    cout << "situation in bubbleSort function:" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr1[i] << endl;
    }
}

int main()
{
    int arr[10] = {10, 15, 12, 18, 5, 1, 78, 12, 1, 5};
    int len = sizeof(arr) / sizeof(int); // 数组的长度

    bubbleSort(arr, len);

    cout << "situation in main function:" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }

    system("pause");
    return 0;
}
