#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(int b = 1; b <= a; b++){
        int c,d,e;
        cin >> c >> d >> e;
        int f[e][2];
        for(int g = 0; g<=e-1; g++){
            for(int h = 0; h<=1; h++){
                cin >> f[g][h];
            }
        }
        int price = 0;
        for(int g = 0; g<=e-1; g++){
            price = price + (f[g][0]*c) + (f[g][1]*d);
        }
        cout<<price;
    }
}