/*

Constraints:
1 < l < 10^9
1 < b < 10^9

Input format:
2 space sperated integer 1 an b
Output Format Single number which is area of rectangle

Sample input:
3 4

Sample output:
12

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,b;
    cin >> l >> b;
    long long int area = l*1LL*b;
    cout << area;
}