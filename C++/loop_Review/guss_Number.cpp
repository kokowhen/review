#include <iostream>
#include <string>
using namespace std;

//用while循环写猜数字游戏

void gussNumber(int a1)
{
    cout << "a1 = " << a1 << endl;
    int b; //用户猜的数字
    cout << "Please input the gussing number:" << endl;
    cin >> b;
    while (b != a1)
    {
        cout << "Come on,your number is still wrong!" << endl;
        cout << "Please try again:" << endl;
        cin >> b;
    }
    cout << "Great,your number is right!" << endl;
}

int main()
{
    int a;
    a = rand() % 100;
    gussNumber(a);

    system("pause");
    return 0;
}
