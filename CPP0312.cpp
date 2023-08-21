#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        string s; int k;
        cin >> s >> k;
        map <char,int>mp;
        for ( int i = 0 ; i < s.length() ; i++){
            mp[s[i]]++;
        } 
        if (26-mp.size() <= k) cout << "1\n";
        else cout << "0\n";
    }
}