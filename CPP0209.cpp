#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        int n,q; cin >> n >> q;
        int a[n];
        for ( int i = 0 ; i < n ; i++) cin >> a[i];
        while ( q-- ){
            int x,y; cin >> x >> y;
            int t = 0;
            for ( int i = x-1 ; i < y ; i++){
                t += a[i];
            }
            cout << t << endl;
        }
    }
}