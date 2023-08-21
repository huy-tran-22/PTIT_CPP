#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        long long n ; cin >> n;
        long long a[n];
        for ( long long i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        long long k = 0;
        while ( k < n){
            int ok = 0;
            for ( int i = 0 ; i < n ; i++){
                if (a[i] == k) {
                    a[i] == k; cout << a[i] << " "; 
                    ok = 1;
                    break;
                }
            }
            if ( ok == 0) cout << "-1 ";
            k++;

        }
        cout << endl;
    }
}