#include <bits/stdc++.h>
using namespace std;

bool snt ( int n){
    if ( n < 2) return false;
    for ( int i = 2 ; i <= sqrt(n) ; i++){
        if ( n % i == 0 ) return false;
    }
    return true;
}
int main (){
    int t; cin >> t;
    while ( t-- ){
    long long a,b; cin >> a >> b;
    if ( a > b) swap(a,b);
    for ( long long i = a ; i <= b ; i++){
            if ( snt (i)) cout << i << " ";
    }
    cout << endl;
    }
}