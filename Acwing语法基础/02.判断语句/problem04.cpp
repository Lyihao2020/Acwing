// Acwing 664. 三角形
/*
读取三个浮点数 A，B 和 C 并验证是否可以用它们形成三角形。

如果可能，则计算并输出三角形的周长：

Perimetro = XX.X

如果不可能，则计算并输出以 A 和 B 为底以 C 为高的梯形面积：

Area = XX.X

输入格式
共一行，包含三个浮点数 A,B,C。

输出格式
按题目描述格式，输出答案，答案保留一位小数。

数据范围
0<A,B,C<100.0
输入样例1：
6.0 4.0 2.0
输出样例1：
Area = 10.0
输入样例2：
6.0 4.0 2.1
输出样例2：
Perimetro = 12.1
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double a, b, c;
    cin >> a >> b >> c;

    if((a + b > c && b + c > a) && a + c > b){
        cout << "Perimetro = " << a + b + c << endl;
    }else{
        cout << "Area = " << fixed << setprecision(1) << (a + b) * c * (1.0 / 2) << endl;
    }

    return 0;
}