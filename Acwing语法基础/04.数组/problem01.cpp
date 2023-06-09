// Acwing 737. 数组替换
/*
输入一个长度为 10 的整数数组 X[10]，将里面的非正整数全部替换为 1，输出替换完成后的数组。

输入格式
输入包含 10 个整数，每个整数占一行。

输出格式
输出新数组中的所有元素，每个元素占一行。

输出格式为 X[i] = x，其中 i 为元素编号（从 0 开始），x 为元素的值。

数据范围
−100≤X[i]≤100
输入样例：
10
-9
0
-4
-10
0
-2
-7
7
4
输出样例：
X[0] = 10
X[1] = 1
X[2] = 1
X[3] = 1
X[4] = 1
X[5] = 1
X[6] = 1
X[7] = 1
X[8] = 7
X[9] = 4
*/

#include<iostream>
using namespace std;

int main(){
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if(a[i] <= 0) a[i] = 1;
    }

    for(int i = 0; i < 10; i++) cout << "X[" << i << "] = " << a[i] << endl;
    
    return 0;
}