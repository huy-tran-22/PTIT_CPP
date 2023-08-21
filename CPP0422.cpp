#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        long long n; cin >> n;
        long long a[n];
        int k = 0;
        for ( long long i = 0 ; i < n ; i++){
            cin >> a[i];
            if ( a[i] == 0 ) k++;
        }
        sort(a,a+n);
        for ( long long i = k  ; i < n ; i++){
            cout << a[i] << " ";
        }
        for ( long long i = 0 ; i < k ; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}