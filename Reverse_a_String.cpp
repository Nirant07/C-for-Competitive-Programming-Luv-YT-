/*

Reverse a String

You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG

Example 2:

Input:
s = for
Output: rof

Your Task:

You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    cin >> str1;
    string str2;
    int j = 0;
    for(int i = str1.size();i>=0;i--){
        str2.push_back(str1[i]);
        j++;
    }
    cout<<str2;
}