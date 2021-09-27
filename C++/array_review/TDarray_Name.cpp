#include <iostream>
#include <string>
using namespace std;

// 二维数组的数组名的作用

// 1.获取二维数组所占内存空间的大小

void GetTDArrayRAMSize()
{

    // 二维数组的定义

    int TDarr[2][3] = {{2, 3, 4}, {5, 6, 7}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << TDarr[i][j] << "\t";
        }
        cout << endl;
    }
    // cout << endl;
    cout << "a[2][3]'s RAM size is " << sizeof(TDarr) << endl;
}

// 获取内存的首地址

void GetFirstArrayAddress()
{
    int TDarray[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            TDarray[i][j] = 2 * j + i;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << TDarray[i][j] << "\t";
        }
        cout << endl;
    }
    // cout << endl;

    // 二维数组的地址

    cout << "a[2][3]'s first line address is " << &TDarray[0] << endl;
    cout << "a[2][3]'s first second address is " << &TDarray[1] << endl;

    cout << "a[0][0]'s first RAM address is " << &TDarray[0][0] << endl;
    cout << "a[1][0]'s first RAM address is " << &TDarray[1][0] << endl;
}

int main()
{
    GetTDArrayRAMSize();
    GetFirstArrayAddress();

    system("pause");
    return 0;
}
