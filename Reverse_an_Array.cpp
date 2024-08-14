#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cin >> i;
    int a[i];
    int b[i];
    for (int j = 0;j<=i-1;j++){
        cin >> a[j];
    }
    for (int j = 0;j<=i-1;j++){
        b[j] = a[i-1-j];
    }
    for (int j = 0;j<=i-1;j++){
        cout << b[j] << " ";
    }
}