#include <bits/stdc++.h>
using namespace std;

int thuannghich ( string s){
    for ( int i = 0 ; i <= s.length()/2 ; i++){
        if (s[i] != s[s.length()-i-1] || (s[i] - '0') % 2 != 0 || (s[s.length()-i-1] - '0') % 2 != 0 ){
            return 0;
        }
    }
    return 1;
}
int main (){
    int t; cin >> t;
    while ( t-- ){
        string s; cin >> s;
        if (thuannghich(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}
