#include <iostream>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        long long n; cin >> n;
        long long tong = 0;
        for ( int i = 1 ; i <= n/2 ; i++){
            tong += i + (n-i+1);
        }
        if ( n % 2 != 0) tong += n/2+1;
        cout << tong << endl;
    }
}