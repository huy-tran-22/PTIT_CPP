#include <bits/stdc++.h>
using namespace std;

void solve ( int n){
    int k = 0;
    int tmp = n;
    while ( n >= 10 ){
        while ( n > 0){
            k += n%10; n/=10;
        }
        n = k;
        if ( n >= 10) k = 0;
    }
    cout << k << endl;

}
int main (){
    int t; cin >> t;
    while ( t-- ){
        int n; cin >> n;
        solve (n);
    }
}