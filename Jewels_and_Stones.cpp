#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(int i = 0; i <= a; i++){
        int num = 0;
        string str1, str2;
        cin >> str1 >> str2;
        for(int b = 0; b <= str1.size()-1;b++){
            for(int c = 0; c <= str2.size()-1;c++){
                if(str2[c]==str1[b]){
                    num++;
                }
            }
        }
        cout << num;
    }
}