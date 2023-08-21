#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ){
        int n; cin >> n;
        int a[n+1];
        for ( int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int l = a[0];
        int r = a[n-1];
        cout << r-l+1 - n << endl;
    }
}