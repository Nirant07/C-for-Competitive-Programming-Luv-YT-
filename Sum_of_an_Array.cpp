#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cin >> i;
    int a[i];
    for(int j = 0;j<=i-1;j++){
        cin >> a[j];
    }
    int sum = 0;
    for(int j = 0;j<=i-1;j++){
        sum = sum + a[j];
    }
    cout << sum;
}