#include <iostream>  //引入输入输出流头文件
#include <string>    //引入字符串头文件
#include <ctime>     //引入系统时间头文件，用于生成时间随机数字
using namespace std; //使用标准命名空间


int main()
{
    //按照生成系统时间随机数种子,不加这一行，则随机数只生成一次，是伪随机数
    //以下两种写法都可以。实际上：NULL==0
    //srand((unsigned int)time(NULL));
    srand((unsigned int)time(0));

    int random = rand() % 61 + 40;   //生成40至100之间的随机数字

    cout << random << endl;
}
