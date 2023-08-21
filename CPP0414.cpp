#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        long long n; cin >> n;
        set <char> se;
        for ( int i = 0 ; i < n ; i++){
            string s; cin >> s;
            for ( int j = 0 ; j < s.length() ; j++){
                se.insert(s[j]);
            }
        }
        for ( char x : se) {
            cout << x << " ";
        }
        cout << endl;
    }
}