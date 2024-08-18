#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b;
    int ans = 1;
    for(int c = 0;c<=a;c++){
    cin >> b;
    int e[b];
    for(int d = 0;d<=b-1;d++){
        cin >> e[d];
    }
    for(int d = 0;d<=b-2;d++){
        if(e[d]>e[d+1]){
            ans++;
        }
    }
    cout << ans;
    }
}