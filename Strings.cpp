/*

Input Format

You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the lengths
In the second line print the string produced by merging both strings
In the third line print two strings separated by a space and their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1.size() << " " << str2.size() << endl;
    cout << str1 << str2 << endl;
    string str3;
    str3[0] = str1[0];
    str1[0] = str2[0];
    str2[0] = str3[0];
    cout << str1 << " " << str2 << endl;
}