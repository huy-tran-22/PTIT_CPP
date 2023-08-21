#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        int n; cin >> n;
        map <int,int> mp;
        int a[n];
        for ( int i = 0 ; i < n ; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int t = 0;
        for ( int i = 0 ; i < mp.size(); i++){
            if (mp[i] > 1) t += mp[i];
        }
        cout << t << endl;
    }
}