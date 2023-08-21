#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    long long a[n+1],b[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < n-1 ; i++){
        cin >> b[i];
    }
    int na,res; na=res=0;
    while (na != n-2 && res == 0){
        if (a[na] != b[na]) res = na;
        else {
            na++;
        }
    }
    cout << res+1 << endl; 
}

int main (){
    int t; cin >> t;
    while(t--){
        solve();
    }
}