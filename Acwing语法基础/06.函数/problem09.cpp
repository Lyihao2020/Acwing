// Acwing 814. 复制数组
/*
给定两个数组 a 和 b 以及一个整数 size，请你编写一个函数，void copy(int a[], int b[], int size)，将 a 数组中的前 size 个数字，复制到 b 数组中。

复制完成后，输出 b 数组。

输入格式
第一行包含整数 n,m,size，分别表示 a 数组的长度，b 数组的长度以及整数 size。

第二行包含 n 个整数，表示数组 a。

第三行包含 m 个整数，表示数组 b。

输出格式
共一行，包含 m 个整数，表示复制完成后的数组 b。

数据范围
1≤n≤m≤100,
1≤size≤n
输入样例：
3 5 2
1 2 3
4 5 6 7 8
输出样例：
1 2 6 7 8
*/

#include<iostream>
using namespace std;

void copy(int a[], int b[], int size){
    for(int i = 0; i < size; i++)
        b[i] = a[i];
}

int main(){
    int n, m, size;
    cin >> n >> m >> size;
    int a[n], b[m];
    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int i = 0; i < m; i++)  cin >> b[i];

    copy(a, b, size);
    for(int i = 0; i < m; i++)  cout << b[i] << " ";

    return 0;

}