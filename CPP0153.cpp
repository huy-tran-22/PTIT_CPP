#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        int n; long long k; cin >> n >> k;
        long long t = 0;
        for ( int i = 1 ; i <= n ; i++){
            t += (i % k);
        }
        cout << t << endl;
    }
}