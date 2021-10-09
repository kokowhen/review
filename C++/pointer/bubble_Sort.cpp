// 封装一个函数，利用冒泡排序，实现对整型数组的升序排序
// 利用冒泡排序的好处就是排序函数执行后，实参数组就是排序好的，不用像之前值传递那样在排序函数里打印排序好的数组，程序的结构更清晰

#include <iostream>
#include <string>
using namespace std;

// 地址传递，传入待排序的数组

void bubbleSort(int *arr, int len)
{
    int tem;
    // 冒泡排序
    for (int i = 0; i < len - 1; i++) // 比较的轮数
    {
        for (int j = 0; j < len - i - 1; j++) // 每一轮比较的次数
        {
            if (arr[j] > arr[j + 1])
            {
                tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
}

// 打印排序好的数组

void printResult(int arr[], int len)
{
    cout << "Result is :" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    // 定义一个待排序的数组
    int arr[] = {85, 4, 74, 23, 99};
    int len = sizeof(arr) / sizeof(int); //求数组的长度
    bubbleSort(arr, len);
    printResult(arr, len);

    system("pause");
    return 0;
}
