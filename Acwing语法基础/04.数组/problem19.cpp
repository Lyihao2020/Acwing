// Acwing 755. 平方矩阵 III
/*
输入整数 N，输出一个 N 阶的二维数组 M。

这个 N 阶二维数组满足 M[i][j]=2i+j。

具体形式可参考样例。

输入格式
输入包含多行，每行包含一个整数 N。

当输入行为 N=0 时，表示输入结束，且该行无需作任何处理。

输出格式
对于每个输入整数 N，输出一个满足要求的 N 阶二维数组。

每个数组占 N 行，每行包含 N 个用空格隔开的整数。

每个数组输出完毕后，输出一个空行。

数据范围
0≤N≤15
输入样例：
1
2
3
4
5
0
输出样例：
1

1 2
2 4

1 2 4
2 4 8
4 8 16

1 2 4 8
2 4 8 16
4 8 16 32
8 16 32 64

1 2 4 8 16
2 4 8 16 32
4 8 16 32 64
8 16 32 64 128
16 32 64 128 256
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    while(cin >> n, n > 0)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                long temp = pow(2, i + j);
                cout << temp << " ";
            }
            cout << endl;
        }
        cout <<  endl;
    }

    return 0;
}

/*

#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n,n)
    {
        for(int i = 0; i < n; i ++)
        {
            for(int j = 0; j < n; j ++)
                cout << (1 << i) * (1 << j) << ' ';//两个乘数 后者控制基数 1 ~ 2^(n-1) ，前者控制倍数
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

*/