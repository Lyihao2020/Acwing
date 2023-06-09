// Acwing 764. 输出字符串
/*
给定一个字符串 a，请你按照下面的要求输出字符串 b。

给定字符串 a 的第一个字符的 ASCII 值加第二个字符的 ASCII 值，得到 b 的第一个字符；

给定字符串 a 的第二个字符的 ASCII 值加第三个字符的 ASCII 值，得到 b 的第二个字符；

…

给定字符串 a 的倒数第二个字符的 ASCII 值加最后一个字符的 ASCII 值，得到 b 的倒数第二个字符；

给定字符串 a 的最后一个字符的 ASCII 值加第一个字符的 ASCII 值，得到 b 的最后一个字符。

输入格式
输入共一行，包含字符串 a。注意字符串中可能包含空格。

数据保证字符串内的字符的 ASCII 值均不超过 63。

输出格式
输出共一行，包含字符串 b。

数据范围
2≤a的长度≤100
输入样例：
1 2 3
输出样例：
QRRSd
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    string s;
    getline(cin, s);
    char c = s[0];

    for(int i = 0; i < s.size(); i++)
        if(i != s.size() - 1)
            s[i] += s[i + 1];
        else
            s[i] += c;

    cout << s << endl;

    return 0;

}

/*

#include <iostream>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    for(int i = 0; i < a.size(); ++i)
        cout << (char)(a[i] + a[(i + 1) % a.size()]);
    return 0;
}
*/