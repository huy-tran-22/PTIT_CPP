#include <bits/stdc++.h>
using namespace std;

void solve ( int n){
    int a[10001] = {0};
    int i = 2;
    while ( n > 1){
        int k = 0;
        if ( n % i == 0){
            while ( n % i == 0){
            k++;
            n/=i;
        }
            cout << i << " " << k << " ";
        }
        else i++;
    }
    for ( int i = 0 ; i < 10001 ; i++){
        if (a[i] > 0) {
            cout << i << " " << a[i] << " ";
        }
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