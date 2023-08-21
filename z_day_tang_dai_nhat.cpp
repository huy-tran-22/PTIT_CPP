#include <bits/stdc++.h>
using namespace std;

void solve (){
    int n; cin >> n;
    int a[n];
    int res[n], m = 1;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
        res[i] = 1;
    }
    for ( int i = 1 ; i < n ; i++){
        for ( int j = 0 ; j < i ; j++){
            if (a[j] < a[i]){
                res[i] = max(res[i],res[j]+1);
                m = max(m,res[i]);
            }
        } 
    }
    cout << m;
}
int main (){
    solve();
}