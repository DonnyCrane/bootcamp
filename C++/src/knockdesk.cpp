#include <iostream>
using namespace std;
/* 
敲桌子小游戏
按1~100的顺序输出整数，但包含数字7或是数字7的倍数的数字排除
*/

int main()
{
    for (int num = 1; num <= 100; num++)
    {
        if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
        {
            cout << "敲桌子" << endl;
        }
        else
        {
            cout << num << endl;
        }
    }

    system("pause");

    return 0;
}