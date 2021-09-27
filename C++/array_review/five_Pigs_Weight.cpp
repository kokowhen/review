#include <iostream>
#include <string>
using namespace std;

// 五只小猪称重，找出并打印出最重的那只

double FindHeaviest(double reciver[])
{
    int i = 0;
    double tem = 0;
    for (int i = 0; i < 5; i++) // 使用冒泡排序的思想
    {
        if (reciver[i] <= reciver[i+1])
        {
            reciver[i] = reciver[i+1];
            tem = reciver[i+1];
        }
        
    }
    return tem;
}

int main()
{
    const int a = 5;
    double arr[a];
    arr[0] = 100.43;
    arr[1] = 100.32;
    arr[2] = 100.45;
    arr[3] = 110.32;
    arr[4] = 108.45;

    double result = FindHeaviest(arr);
    cout << "The heaviest pig's weight is " << result << endl;

    system("pause");
    return 0;
}
