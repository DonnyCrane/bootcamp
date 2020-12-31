#include <iostream>  //引入输入输出流头文件
#include <string>    //引入字符串头文件
#include <ctime>     //引入系统时间头文件，用于生成时间随机数字
using namespace std; //使用标准命名空间

//一、定义结构体函数
//1、定义学生结构体
struct student
{
    string s_name;
    int score;
};

//2、定义教师结构体
struct teacher
{
    string t_name;
    struct student s_array[];
};

//二、创建赋值、打印函数，以供main函数调用
void structspace(struct teacher t_array[], int t_len, int s_len)
{
    string name_seed = "ABCDEF";
    srand((unsigned int)time(NULL)); //按照生成系统时间随机数种子,不加这一行，则随机数只生成一次，是伪随机数
    int random = rand() % 61 + 40;   //生成40至100之间的随机数字

    for (int i = 0; i < t_len; i++)
    {
        for (int j = 0; j < s_len; j++)
        {
            t_array[i].t_name = "Teacher" + name_seed[i];
            t_array[i].s_array[j].s_name = "student" + name_seed[j];
            t_array[i].s_array[j].score = random;
        }
    }
}

//创建打印函数，供后面调用
void printinfo(struct teacher t_array[], int t_len, int s_len)
{
    for (int i = 0; i < t_len; i++) //外层for循环，遍历并打印教师信息
    {
        cout << "\t 教师的姓名： " << t_array[i].t_name << endl;
        for (int j = 0; j < s_len; j++) //内存for循环，遍历并打印学生信息
        {
            cout << "\t 所带学生名字: " << t_array[i].s_array->s_name[j]
                 << "\t 所带学生成绩: " << t_array[i].s_array->score;
        }
        cout << endl;
    }
}

//给结构体赋值，调用函数打印输出教师及学生信息
int main()
{
    // int t_num;
    // int s_num;
    // cout << "总的教师数量为： " << endl;
    // cin >> t_num;
    // cout << "每位教师所带学生数量为： "<< endl;
    // cin >> s_num
    // struct teacher t_array[t_num]; //赋值教师信息为3
    // struct student s_array[s_num]; //赋值学生信息为5

    struct teacher t_array[3]; //赋值教师信息为3
    struct student s_array[5]; //赋值学生信息为5

    int t_len = sizeof(t_array) / sizeof(t_array[0]); //用函数求得数组所含值的个数
    int s_len = sizeof(s_array) / sizeof(s_array[0]); //同上

    structspace(t_array, t_len, s_len); //用函数为教师及学生信息进行赋值

    //打印教师及学生信息
    printinfo(t_array, t_len, s_len);

    return 0;
}