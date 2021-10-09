// 空指针

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *p = NULL;
    // cout << *p << endl;//不可访问
    cout << p << endl;
    system("pause");
    return 0;
}
