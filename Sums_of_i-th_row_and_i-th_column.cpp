/*

Given a matrix A of dimensions NxM. Check whether the sum of the ith row is equal to the sum of the ith column.
Note: Check only up to valid row and column numbers i.e if the dimensions are 3x5, check only for the first 3 rows and columns, i.e. min(N, M).

Example 1:

Input:
N=2,M=2
A=[[1,2],[2,1]]
Output:
1
Explanation:
The sum of 1st row is equal to sum of
1st column and also sum of 2nd row is equal 
to the sum of 2nd column.So, Answer is 1.
Example 2:

Input:
N=1,M=3
A=[[5],[0],[0]]
Output:
1
Explanation:
The sum of 1st column is equal
to the sum of 1st row.Thus,answer is 1.
(We do not check for the 2nd and 3rd rows
because there are no 2nd and 3rd columns.)

Your Task:
You don't need to read input or print anything. Your task is to complete the function sumOfRowCol() which takes two integers N, M and a 2D array A as input parameters and returns 1 if all the valid sum of rows is equal to the valid sum of columns. Otherwise, returns 0.


Expected Time Complexity:O(N*M)
Expected Auxillary Space:O(min(N,M))
 

Constraints:
1<=N,M,A[i][j]<=103

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sum_row = 0;
    int sum_col = 0;
    int c[a][b];
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cin >> c[i][j];
        }
    }
    if(a>b){
        for(int i = 0;i<b;i++){
            for(int j = 0;j<b;j++){
            sum_row = sum_row + c[b][j];
        }
        for(int j = 0;j<b;j++){
            sum_col = sum_col + c[j][b];
        }
        if(sum_col == sum_row){
            cout<<"1";
        }
    }
    }
        if(a<=b){
        for(int i = 0;i<a;i++){
            for(int j = 0;j<a;j++){
            sum_row = sum_row + c[a][j];
        }
        for(int j = 0;j<a;j++){
            sum_col = sum_col + c[j][a];
        }
        if(sum_col == sum_row){
            cout<<"1";
        }
    }
}
}