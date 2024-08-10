#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int rev = 0;
    cin >> n;
    while(n!=0){
        int i = n % 10;
        n = n / 10;
        rev = rev * 10 + i;
    }
    cout << rev;
}