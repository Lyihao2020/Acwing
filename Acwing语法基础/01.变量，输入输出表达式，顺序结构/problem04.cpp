// AcWing 606. 平均数1
/*
读取两个浮点数 A 和 B 的值，对应于两个学生的成绩。

请你计算学生的平均分，其中 A 的成绩的权重为 3.5，B 的成绩的权重为 7.5。

成绩的取值范围在 0 到 10 之间，且均保留一位小数。

输入格式
输入占两行，每行包含一个浮点数，第一行表示 A，第二行表示 B。

输出格式
输出格式为 MEDIA = X，其中 X 为平均分，结果保留五位小数。

数据范围
0≤A,B≤10.0
输入样例：
5.0
7.1
输出样例：
MEDIA = 6.43182
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;

    cout << "MEDIA = " << fixed << setprecision(5) << (a * 3.5 + b * 7.5) / 11;
    return 0;
}