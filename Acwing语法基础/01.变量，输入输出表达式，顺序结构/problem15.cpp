// Acwing 610. 工资和奖金
/*
请你编写一个程序，给定你一个销售人员的名字，底薪以及月销售额。

请你计算他的月收入是多少。

已知月收入等于底薪加 15% 的月销售额。

所有数据保留两位小数。

输入格式
输入第一行包含一个由大写字母构成的长度不超过 10 的字符串，表示销售人员的名字。

第二行包含一个浮点数，表示该人员的底薪。

第三行包含一个浮点数，表示该人员的月销售额。

输出格式
输出格式为 TOTAL = R$ X，X 为该人员月收入。

数据范围
0≤底薪，月销售额≤10000.00
输入样例：
JOAO
500.00
1000.00
输出样例：
TOTAL = R$ 650.00
*/

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main(){
    string name;
    double salary, sales;

    cin >> name >> salary >> sales;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salary + 0.15 * sales;

    return 0;

}