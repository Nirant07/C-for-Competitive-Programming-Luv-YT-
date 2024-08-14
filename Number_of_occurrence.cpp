#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    int occ = 0;
    cin >> i;
    cin >> j;
    int a[i];
    for(int b = 0;b<=i-1;b++){
        cin >> a[b];
    }
    for(int b = 0;b<=i-1;b++){
        if(a[b]==j){
            occ++;
        }
    }
    cout << occ;
}