#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    for(int j = 0; j <= str2.size()-1; j++){
        for(int i = 0; i <= str1.size()-1; i++){
            if(str1[i]==str2[j]){
                str1[i]=0;
            }
        }
    }
    cout<<str1;
}