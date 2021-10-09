#include <iostream>
#include <string>
using namespace std;

// 输出学生分数的总和

void ScoreSum(double scoreReciver[][3], string nameReciver[]) // 二维数组值传递形参列表第二维必须声明
{
    for (int i = 0; i < 3; i++)
    {
        double sum = 0; // 初始化：每次计算一位同学的总成绩之前都要初始化
        for (int j = 0; j < 3; j++)
        {
            sum = scoreReciver[i][j] + sum;
        }
        cout << nameReciver[i] << "'s sumscore is " << sum << endl;
    }
}

int main()
{
    double scores[3][3] =
        {
            {98.5, 94.2, 88.4},
            {88.6, 90.1, 92},
            {98, 88, 90},
        };

    string name[3] = {"Jacky", "Jay", "Jeffery"};
    ScoreSum(scores, name);

    system("pause");
    return 0;
}
