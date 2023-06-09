// Acwing 668. 游戏时间2
/*
读取四个整数 A,B,C,D，用来表示游戏的开始时间和结束时间。

其中 A 和 B 为开始时刻的小时和分钟数，C 和 D 为结束时刻的小时和分钟数。

请你计算游戏的持续时间。

比赛最短持续 1 分钟，最长持续 24 小时。

输入格式
共一行，包含四个整数 A,B,C,D。

输出格式
输出格式为 O JOGO DUROU X HORA(S) E Y MINUTO(S)，表示游戏共持续了 X 小时 Y 分钟。

数据范围
0≤A,C≤23,
0≤B,D≤59
输入样例1：
7 8 9 10
输出样例1：
O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
输入样例2：
7 7 7 7
输出样例2：
O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
输入样例3：
7 10 8 9
输出样例3：
O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
*/

#include<iostream>
using namespace std;

int main(){
    int h1, m1, h2, m2, temp;
    cin >> h1 >> m1 >> h2 >> m2;

    if(h1 >= h2){
        temp = (24 + h2 - h1) * 60 + m2 - m1;
        if(temp / 60.0 > 24) temp -= 24 * 60;
    }else{
        temp = (h2 - h1) * 60 + m2 - m1;
    }

    cout << "O JOGO DUROU " << temp / 60 << " HORA(S) E " << temp % 60 <<" MINUTO(S)"; 

    return 0;
}