// const修饰指针的三种情况

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a = 10;
    int b = 100;
    int c = 1000;
    // 情况1：const修饰指针，称为常量指针
    const int *p1;
    p1 = &a;
    p1 = &b;//指针的指向可以改
    // *p1 = b;//指针指向的值不可以改

    // 情况2：const修饰常量，称为指针常量
    int * const p2 = &a;
    // p2 = &b;//指针指向不可以改
    *p2 = a;
    *p2 = b;//指针指向的值可以改

    // 情况3：const既修饰指针又修饰常量
    int const * const p3 = &c;
    // p3 = &a;
    // *p3 = a;//指针的指向和指针指向的值都不可以改
    system("pause");
    return 0;
}
