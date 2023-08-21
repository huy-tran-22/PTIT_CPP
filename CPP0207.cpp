#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        int n,k; cin >> n >> k;
        int a[n];
        for ( int i = 0 ; i < n ; i++) cin >> a[i];
        int b[k],cnt=0;
        for ( int i = 0 ; i < k ; i++){
            b[i] = a[i];
        }
        for ( int i = 0 ; i < n-k ; i++){
            a[i] = a[i+k];
        }
        for ( int i = n-k ; i < n ; i++){
            a[i] = b[cnt++];
        }
        for ( int i = 0 ; i < n ; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}