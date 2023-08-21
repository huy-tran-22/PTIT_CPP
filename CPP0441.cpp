#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        int n,k, cnt = 0,ok = 0; cin >> n >> k;
        for ( int i = 0 ; i < n ; i++){
            int x; cin >> x;
            if (x != k && ok == 0) cnt++;
            if ( x == k && ok == 0){
                cnt++; ok = 1;
            }
        }
        if ( ok == 0) cout << "-1\n";
        else cout << cnt << endl;
    }
}