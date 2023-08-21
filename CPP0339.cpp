#include <bits/stdc++.h>
using namespace std;

long long gt ( int x ){
    long long t = 1;
    for ( int i = 2 ; i <= x ; i++) {
        t *= i;
    }
    return t;
}
int main (){
    int t; cin >> t;
    while ( t-- ){
        string s; cin >> s;
        map <char,int> mp;
        for ( int i = 0 ; i < s.length() ; i++){
            mp[s[i]]++;
        }
        long long t = 0;
        for ( int i = 0 ; i < mp.size() ; i++){
            if ( mp[i] >= 2)
                t += (gt(mp[i]) / (2*gt(mp[i]-2)));
        }
        t += s.length();
        cout << t << endl;
    }
}