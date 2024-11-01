#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    a[0] = 1;
    a[1] = 3;
    int *p = &a[0];
    cout << *p << endl;
    cout << p<< endl;
    cout << p+1<< endl;
    cout << *p + 1<< endl;
    int *q = &a[1];
    cout << *q<< endl;
    cout << q<< endl;
    cout << q+1<< endl;
    cout << *q + 1<< endl;
}