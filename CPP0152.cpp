#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        int ok = 0;
        int n,m; cin >> n >> m;
        for ( int i = 0 ; i < m ; i++){
            if ( i * n % m == 1){
                cout << i << endl; ok = 1;
                break;
            }
        }
        if ( !ok ) cout << "-1\n";
    }
}