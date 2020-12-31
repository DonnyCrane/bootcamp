#include <iostream>
using namespace std;

// 创建整数数组排序函数
void sort(int *arr, int len)
{
    //用冒泡算法,对数组进行正序排列：
    //比较数组中第一个元素与第二个元素，如果第一个元素大于第二个元素，
    //则调换二者的顺序,之后依次循环。
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 1; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j + 1] = arr[j];
                arr[j + 1] = temp;
            }
        }
        return;
    }
}


//打印排序后的数组
void printarray(int * arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}


//调用冒泡排序函数并打印重排后的数组
int main()
{
    int num[] = {2, 55, 11, 42, 7, 89, 235, 1};
    int len = sizeof(num) / sizeof(num[0]);
    //调用冒泡排序函数
    sort(num, len);

    cout << num << endl;

    return 0;
}
