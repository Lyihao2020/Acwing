//Acwing 672. 税
/*
读取一个保留两位小数的浮点数值，表示一个公民的工资。

在公民缴纳个人所得税时，不同收入部分需要缴税的税率也是不同的。

输入格式
共一行，包含一个浮点数。

输出格式
如果公民需要缴税，则输出所需缴纳的税额。输出格式为 R$ X，其中 X 为个税的金额，保留两位小数。

如果公民不需要缴税，则输出 Isento。

数据范围
0≤公民工资≤5000
输入样例1：
3002.00
输出样例1：
R$ 80.36
输入样例2：
1700.00
输出样例2：
Isento
输入样例3：
4520.00
输出样例3：
R$ 355.60
样例解释
对于样例 1，0∼2000.00 部分不用缴税，2000.01∼3000.00 部分按 8% 的税率缴税，共计 1000×8%=80，3000.01∼3002.00 部分按 18% 的税率缴税，共计 2×18%=0.36，合计 80.36。

对于样例 2，公民收入未超过 2000，所以输出 Isento。

对于样例 3，0∼2000.00 部分不用缴税，2000.01∼3000.00 部分按 8% 的税率缴税，共计 1000×8%=80，3000.01∼4500.00 部分按 18% 的税率缴税，共计 1500×18%=270，4500.01∼4520 部分按 28% 的税率缴税，共计 20×28%=5.60，合计 355.60。
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double n;
    cin >> n;

    if(n <= 2000){
        cout << "Isento";
    }else if(n > 2000 && n <= 3000){
        cout << "R$ " << fixed << setprecision(2) << 0.08 * (n - 2000);
    }else if(n > 3000 && n <= 4500){
        cout << "R$ " << fixed << setprecision(2) << 80 + 0.18 * (n - 3000);
    }else{
        cout << "R$ " << fixed << setprecision(2) << 350 + 0.28 * (n - 4500);
    }
    return 0;
}