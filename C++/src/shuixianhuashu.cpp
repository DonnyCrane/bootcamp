#include <iostream>
#include <cmath>

using namespace std;

int main() //水仙花数，1^3 + 5^3 + 3^3 = 153
{
  //定义变量，并赋予初始值
  int a = 0; //个位数
  int b = 0; //十位数
  int c = 0; //百位数
  int num = 100;

  //do……while循环，一直做do事，只要while条件满足
  do
  {
    //注意，变量重新赋值不要放在上面，否则数值恒定，没法循环
    a = num % 10;                                 //取模于10，得到个位数字
    b = num / 10 % 10;                            //三位数字除以十，得到两位数字，取模于10，得到最后一位，即原三维数字的十位数字
    c = num / 100;                                //三位数字除以100，得到百位数字
    if (a * a * a + b * b * b + c * c * c == num) //判断，注意要用「==」符号，「=」号在编程语言中表示赋值
    {
      cout << num << endl;
    }

    num++;
  } while (num < 1000);

  system("pause");
  return 0;
}
