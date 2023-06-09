// Acwing 742. 最小数和它的位置
/*
输入一个整数 N 和一个长度为 N 的整数数组 X。

请你找到数组中最小的元素，并输出它的值和下标。

注意，如果有多个最小值，则返回下标最小的那个。

输入格式
第一行包含整数 N。

第二行包含 N 个用空格隔开的整数 X[i]。

输出格式
第一行输出 Minimum value: x，其中 x 为数组元素最小值。

第二行输出 Position: y，其中 y 为最小值元素的下标（下标从 0 开始计数）。

数据范围
1<N≤1000,
−1000≤X[i]≤1000
输入样例：
10
1 2 3 4 -5 6 7 8 9 10
输出样例：
Minimum value: -5
Position: 4
*/

#include<iostream>
using namespace std;

int main(){
    int n, min, pos = 0;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)  cin >> arr[i];

    min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }

    cout << "Minimum value: " << min << endl;
    cout << "Position: " << pos << endl;

    return 0;

}