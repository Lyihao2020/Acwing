// Acwing 762. 字符串匹配
/*
给定两个长度相同的字符串 a 和字符串 b。

如果在某个位置 i 上，满足字符串 a 上的字符 a[i] 和字符串 b 上的字符 b[i] 相同，那么这个位置上的字符就是匹配的。

如果两个字符串的匹配位置的数量与字符串总长度的比值大于或等于 k，则称两个字符串是匹配的。

现在请你判断给定的两个字符串是否匹配。

输入格式
第一行包含一个浮点数 k，第二行包含字符串 a，第三行包含字符串 b。

输入的字符串中不包含空格。

输出格式
如果两个字符串匹配，则输出 yes。

否则，输出 no。

数据范围
0≤k≤1,
字符串的长度不超过 100。

输入样例：
0.4
abcde
xbacd
输出样例：
no
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    double st, cnt = 0;
    cin >> st;
    string s1, s2;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == s2[i]) cnt++;
    }

    if(cnt / s1.size() >= st)
        cout << "yes" << endl;
    else    
        cout << "no" << endl;

    return 0;
}