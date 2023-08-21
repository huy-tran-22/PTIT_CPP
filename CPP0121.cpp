#include <bits/stdc++.h>
using namespace std;
//  14 8
long long GCD ( long long a , long long b){
    if ( b == 0) return a;
    return GCD ( b,a%b);
}
long long LCM ( long long a , long long b){
    return a*b/GCD(a,b);
}
int main (){
    int t; cin >> t;
    while ( t-- ){
        long long a,b; cin >> a >>b;
        cout << LCM(a,b) << " " << GCD (a,b) << endl;
    }
}