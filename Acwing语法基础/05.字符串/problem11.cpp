// Acwing 767. 信息加密
/*
在传输信息的过程中，为了保证信息的安全，我们需要对原信息进行加密处理，形成加密信息，从而使得信息内容不会被监听者窃取。

现在给定一个字符串，对其进行加密处理。

加密的规则如下：

字符串中的小写字母，a 加密为 b，b 加密为 c，…，y 加密为 z，z 加密为 a。
字符串中的大写字母，A 加密为 B，B 加密为 C，…，Y 加密为 Z，Z 加密为 A。
字符串中的其他字符，不作处理。
请你输出加密后的字符串。

输入格式
共一行，包含一个字符串。注意字符串中可能包含空格。

输出格式
输出加密后的字符串。

数据范围
输入字符串的长度不超过 100。

输入样例：
Hello! How are you!
输出样例：
Ifmmp! Ipx bsf zpv!
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s1;
    getline(cin, s1);
/*
    for(char&c : s1){
        if(c >= 65 && c <= 90)   c = (c - 64) % 26 + 65;
        else if(c >= 97 && c <= 122) c = (c - 96) % 26 + 97;
    }
*/
    cout << s1 << endl;

    return 0;

}