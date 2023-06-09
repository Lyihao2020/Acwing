// Acwing 769. 替换字符
/*
给定一个由大小写字母构成的字符串。

把该字符串中特定的字符全部用字符 # 替换。

请你输出替换后的字符串。

输入格式
输入共两行。

第一行包含一个长度不超过 30 的字符串。

第二行包含一个字符，表示要替换掉的特定字符。

输出格式
输出共一行，为替换后的字符串。

输入样例：
hello
l
输出样例：
he##o
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    string s;
    char sym;
    cin >> s >> sym;

    for(char& c : s) 
        if(c == sym)
            cout << '#';
        else
            cout << c;
            
    return 0;

}