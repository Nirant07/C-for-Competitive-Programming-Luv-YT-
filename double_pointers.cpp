#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 4;
    int *p_x = &x;
    int **p_p_x = &p_x;
    cout << x << endl;
    cout << p_x << endl;
    cout << p_x + 1 << endl;
    cout << p_p_x << endl;
    cout << p_p_x + 1 << endl;
    x = 5;
    cout << p_x << endl;
    cout << p_x + 1 << endl;
    cout << p_p_x << endl;
    cout << p_p_x + 1 << endl;
}