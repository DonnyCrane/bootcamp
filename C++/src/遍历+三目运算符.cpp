#include <iostream>
using namespace std;

int main()
{
    //算法一：运用for循环，遍历5只小猪体重，比较得出最重的一只
    int w1[5] = {200, 300, 250, 400, 150};
    int max1 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (w1[i] > max1)
        {
            max1 = w1[i];
        }
    }
    cout << "最重的小猪体重为： " << max1 << endl;

    //算法二：运用for循环加三目运算符，遍历5只小猪体重，比较得出最重的一只
    int w2[5] = {200, 300, 100, 240, 150};
    int max2 = 0;
    for (int i = 1; i < 5; i++)
    {
        max2 = (w2[i] > max2) ? w2[i] : max2;
    }
    cout << "最重的小猪体重为： " << max2 << endl;

    return 0;
}
