#include <bits/stdc++.h>
using namespace std;

long long GCD ( long long a , long long b){
    if ( b == 0 ) return a;
    return GCD ( b , a%b);
}
long long LCM ( long long a , long long b){
    return a * b / GCD ( a,b);
}
int main (){
    int t ; cin >> t;
    while ( t -- ){
        long long n;
        cin >> n;   
        long long tmp = 2;
        for (long long i = 3 ; i <= n ; i ++){
            tmp = LCM ( tmp , i);
        }
        cout << tmp << endl;
    }
}