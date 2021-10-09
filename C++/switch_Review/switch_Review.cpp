#include <iostream>
#include <string>
using namespace std;

// 利用switch给电影评分

void score()
{
    int scores = 0;
    while (true)
    {
        cout << "Please scores for the film." << endl;
        cin >> scores;

        switch (scores)
        {
        case 10:
        case 9:
            cout << "Classical!" << endl;
            break;
        case 8:
            cout << "Very good!" << endl;
            break;
        case 7:
        case 6:
            cout << "Normal!" << endl;
            break;
        default:
            cout << "Bad!" << endl;
            break;
        }
    }
}

int main()
{
    score();

    system("pause");
    return 0;
}
