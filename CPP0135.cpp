#include <bits/stdc++.h>
using namespace std;

int snt ( int n ){
    if ( n < 2) return 0;
    for ( int i = 2 ; i <= sqrt (n) ; i++){
        if ( n % i == 0) return 0;
    }
    return 1;
}
void solve ( int n){
    int i = 2;
    while ( pow(i,2) <= n){
        if (snt(i)){
            int k = pow(i,2);
            cout << k << " "; 
        }
        i++;
    }
    cout << endl;
}
int main (){
    int t; cin >> t;
    while ( t-- ){
        int n; cin >> n;
        solve (n);
    }
}