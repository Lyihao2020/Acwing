// Acwing 750. 数组的下方区域
/*
输入一个二维数组 M[12][12]，根据输入的要求，求出二维数组的下方区域元素的平均值或元素的和。

数组的两条对角线将数组分为了上下左右四个部分，如下图所示，黄色部分为对角线，绿色部分为下方区域：

UOJ_1188.png

输入格式
第一行输入一个大写字母，若为 S，则表示需要求出下方区域的元素的和，若为 M，则表示需要求出下方区域的元素的平均值。

接下来 12 行，每行包含 12 个用空格隔开的浮点数，表示这个二维数组，其中第 i+1 行的第 j+1 个数表示数组元素 M[i][j]。

输出格式
输出一个数，表示所求的平均数或和的值，保留一位小数。

数据范围
−100.0≤M[i][j]≤100.0
输入样例：
S
-6.0 0.7 -8.4 -5.7 -4.1 7.6 9.5 -9.7 4.1 0.6 -6.5 -4.9
6.6 4.9 -3.1 5.3 0.3 -4.5 3.9 -1.5 6.6 7.0 5.1 2.5
-8.5 1.8 -2.7 0.1 -4.9 -7.2 4.3 6.0 -1.4 2.7 -3.0 2.0
4.8 -7.0 -1.3 0.8 1.0 4.5 -1.1 -2.9 -3.9 -3.9 -8.9 5.8
-2.1 -9.6 5.1 0.2 1.0 -1.7 6.4 4.1 2.8 -6.9 2.4 9.3
-6.0 -9.1 -7.0 -7.0 7.8 5.1 6.9 -7.6 0.4 -7.2 5.5 6.0
-1.9 5.5 1.9 -8.5 -5.3 2.3 -9.3 2.0 -0.2 1.2 5.6 -1.8
8.2 2.3 3.5 1.4 4.0 -5.1 -6.9 -2.8 1.7 -7.0 7.8 1.8
-6.0 -4.1 -4.6 -9.4 -4.9 -4.1 4.2 6.3 -2.8 8.7 8.1 -0.9
8.8 -6.5 -4.3 6.1 -6.2 -3.9 -7.0 7.3 5.0 -0.9 -0.0 5.6
-2.4 1.4 8.5 -2.2 0.9 5.3 3.6 8.8 -8.1 3.0 -3.1 6.5
-3.8 -6.4 2.3 4.2 -9.8 -0.3 -9.9 -7.4 3.5 1.5 -0.2 7.0
输出样例：
-11.9
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double total = 0;
    char sym;
    int cnt = 0;
    cin >> sym;
    
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
        {
            double temp;
            cin >> temp;
            if(j > 11 - i && j < i)
            {
                total += temp;
                cnt++;
            }
        }
    
    cout << fixed << setprecision(1) << ((sym == 'S')? total: total / cnt);

    return 0;
}