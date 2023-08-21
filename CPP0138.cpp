#include <bits/stdc++.h>
using namespace std;

int snt ( int x){
    if ( x < 2) return 0;
    for ( int i = 2 ; i <= sqrt(x) ; i++){
        if ( x % i == 0) return 0;
    }
    return 1;
}
int main (){
    int t ; cin >> t;
    while ( t-- ){
        int n; cin >> n;
        for ( int i = 2 ; i <= n/2 ; i++){
            if ( snt(i) && snt (n-i)){
                cout << i << " "<< n-i << endl;
                break;
            }
        }
    }
}