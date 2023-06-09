// Acwing 710. 六个奇数
/*
读取一个整数 X，输出 X 之后的 6 个奇数，如果 X 也是奇数，那么它也算作 6 个奇数之一。

输入格式
一个整数 X。

输出格式
所有满足条件的奇数，每个占一行。

数据范围
1≤X≤100
输入样例：
9
输出样例：
9
11
13
15
17
19
*/

#include<iostream>
using namespace std;

int main(){

    int n, cnt = 0;
    cin >> n;

    while(cnt < 6){
        if(n % 2 == 1){
            cout << n << endl;
            cnt++;
        }
        n++;
    }

    return 0;
}