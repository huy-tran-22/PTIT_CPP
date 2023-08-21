#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    double t = 0;
    for ( int i = 1 ; i <= n ; i++){
        t += (float)1/i;
    }
    cout << fixed << setprecision(4) << t << endl;
}