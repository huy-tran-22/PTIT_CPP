#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t; 
    while ( t-- ){
        int n; cin >> n;
        int a[n];
        for ( int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a,a+n);
        vector <int> l; vector <int> x;
        for ( int i = 0 ; i < n ; i++){
            l.push_back(a[i]);
            x.push_back(a[n-i-1]);    
        }
        int k = 0;
        for ( int i = 0 ; i < n/2 ; i++){
            if ( k < n ){
                cout << x[i] << " " << l[i] << " ";
                k++;
            }
        }
        if ( n % 2 != 0) cout << x[n/2];
        cout << endl;
    }
}