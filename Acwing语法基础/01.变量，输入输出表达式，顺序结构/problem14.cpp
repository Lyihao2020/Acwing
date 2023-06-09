// Acwing 607. 平均数2
/*
读取三个浮点数 A，B 和 C 的值，对应于三个学生的成绩。

请你计算学生的平均分，其中 A 的成绩的权重为 2，B 的成绩的权重为 3，C 的成绩的权值为 5。

成绩的取值范围在 0 到 10 之间，且均保留一位小数。

输入格式
输入共三行，每行包含一个浮点数，第一行表示 A，第二行表示 B，第三行表示 C。

输出格式
输出格式为 MEDIA = X，其中 X 为平均分，结果保留一位小数。

数据范围
0≤A,B,C≤10.0,

输入样例：
5.0
6.0
7.0
输出样例：
MEDIA = 6.3
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;

    cout << "MEDIA = " << fixed << setprecision(1) << 0.2 * a + 0.3 * b + 0.5 * c;

    return 0;
}