#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //乘法口诀表
    //运用嵌套的for循环，创建一个乘法口诀表小程序
    char name[] = "乘法口诀表";
    cout << name << endl;
    cout << "---------------------" << endl;

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (j <= i)
            {
                cout << j << "*" << i << " = " << j * i << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}