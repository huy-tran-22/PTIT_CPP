#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        long long n; cin >> n;
        vector <int> v;
        while ( n > 0){
            v.push_back(n%10);
            n /= 10;
        }
        long long vt = v.size();
        reverse(v.begin(),v.end());
        for ( int i = 0 ; i < v.size() ; i++){
            if (v[i] > 1) {
                vt = i;
                break;
            }
        }
        for ( int i = vt ; i < v.size() ; i++){
            v[i] = 1;
        }
        long long res = 0;
        long long mu = 1;
        for ( int i = v.size() - 1 ; i >= 0 ; i --){
            res += v[i] * mu;
            mu *= 2;
        }
        cout << res << endl;
    }
}