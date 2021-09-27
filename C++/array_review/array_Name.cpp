
//数组名的作用

#include <iostream>
#include <string>
using namespace std;

// 1.获取整个数组所占内存空间的大小

int GetArrayRAMSize()
{
    int arr[5] = {1, 2, 3, 4, 5};
    return sizeof(arr);
}

// 2.获取内存的首地址

void GetFirstArrayRAMAddress()
{
    int arr[2] = {0, 3};
    cout << "arr[0]'s address is " << &arr[0] << endl;
    cout << "arr[0]'s address is " << &arr[1] << endl;
}

int main()
{
    int result = GetArrayRAMSize();
    cout << "arr[5]'s size of RAM is " << result << endl;

    GetFirstArrayRAMAddress();

    system("pause");
    return 0;
}
