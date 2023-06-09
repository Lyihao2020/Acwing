// Acwing 711. 乘法表
/*
输入一个整数 N，输出 N 的乘法表，如下：

1 x N = N      
2 x N = 2N        
...       
10 x N = 10N 
输入格式
一个整数 N。

输出格式
输出 N 的乘法表，具体形式参照输出样例。

数据范围
1<N<1000
输入样例：
140
输出样例：
1 x 140 = 140
2 x 140 = 280
3 x 140 = 420
4 x 140 = 560
5 x 140 = 700
6 x 140 = 840
7 x 140 = 980
8 x 140 = 1120
9 x 140 = 1260
10 x 140 = 1400
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= 10; i++){
        cout << i << " x " << n << " = " << n * i << endl;
    }

    return 0;
}