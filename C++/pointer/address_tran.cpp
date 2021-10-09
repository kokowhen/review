// 地址传递函数参数，形参变化影响实参

#include<iostream>
#include<string>
using namespace std;

void test(int *p1,int *p2)
{
    int tem1 = 100;
    int tem2 = 200;

    cout<<*p1<<endl;
    cout<<*p2<<endl;

    *p1 = tem1;
    *p2 = tem2;
}

int main()
{
    int a1 = 10;
    int a2 = 20;
    test(&a1,&a2);

    //修改函数形参外部发生实参改变
    cout<<"a1 = "<<a1<<endl;
    cout<<"a2 = "<<a2<<endl;

    
    system("pause");
    return 0;
}
