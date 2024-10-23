#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,d,ans;
    cin >> d;
    for(int k = 0;k<d;k++){
    cin >> a >> b;
    int c[a][b];
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cin >> c[i][j];
        }
    }
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            if(c[i][j]!=c[a-i-1][j]||c[i][j]!=c[i][b-1-j]){
                ans = 1;
        }
    }
    }
    if(ans==1){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
}
}