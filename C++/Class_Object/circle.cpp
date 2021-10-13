// 设计圆类计算面积

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 圆周率
const double PI = 3.14;

// 创建一个圆类

class Circle
{
public: // 访问权限：公共权限
    // 属性
    int m_r;

    // 行为（方法）
    double calculatePerimeter()
    {
        return PI * pow(m_r, 2);
    }
};

int main()
{
    // 创建一个圆类的实例
    Circle c1;
    c1.m_r = 220;

    double result = c1.calculatePerimeter();
    cout << "area is:" << result << endl;

    system("pause");
    return 0;
}
