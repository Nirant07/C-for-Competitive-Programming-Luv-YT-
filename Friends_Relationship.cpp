/*

Jack is your friend and Sophia is his girlfriend. But due to some unknown reason ( unknown for us, they know it) Sophia started hating to Jack. Now, Jack is in big trouble but he has a solution, He knows that if he will gift T patterns of a particular type ( For pattern observation see the sample test cases) then Sophia will start loving again to Jack. But Jack is depressed now and need your help to gift her that type patterns of '*' and '#' of N lines. So, it's your responsibility to save your friend's relationship.

Constraints :

1 ≤  T ≤ 100

1 ≤  N ≤ 30

Input :

First Line contains T i.e. number of test case.
Each of the next T lines contain an integer N.

Output:

For each test case print the pattern of N lines then after a blank line.

Sample Input
1
9


Sample Output
*################*
**##############**
***############***
****##########****
*****########*****
******######******
*******####*******
********##********
******************

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    int n;
    int a = 1;
    cin >> i;
    for(int j = 1;j<=i;j++){
        cin >> n;
        int b = n - 1;
        for (int d = 1;d<=n;d++){
        if(a<(n+1)){
            for(int e = 1; e <= a; e++){
            cout << "*";
            }
        }
        if(b>0){
            for(int e = 1; e <= b; e++){
            cout << "##";
            }
            b--;
        }
        if(a<(n+1)){
            for(int e = 1; e <= a; e++){
            cout << "*";
            }
            a++;
        }
        cout<<endl;
        }
    }
}