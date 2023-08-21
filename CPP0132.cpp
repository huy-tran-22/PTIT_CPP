#include <bits/stdc++.h>
using namespace std;

void solve ( long long n){
    long long k = 0;
    while ( n % 2 == 0) {
        n/=2; k = 2;
    }
    for ( long long i = 3 ; i <= sqrt (n) ; i++){
        while ( n % i == 0) {
            n/=i;
        }
        k = i;
    }
    if ( n > k) k = n;
    cout << k << endl;
}
int main (){
    int n; cin >> n;
    while ( n--){
        long long x ; cin >> x;
        solve (x);
    }
}