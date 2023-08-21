#include <iostream>
using namespace std;

void solve ( string s){
    int l = 0 , r = s.length()-1 , ok = 1;
    while ( l < r){
        if (s[l] != s[r]) {
            cout << "NO\n"; ok = 0; break;
        }
        l++; r--;
    }
    if (ok == 1) cout << "YES\n";
}
int main (){
    int t; cin >> t;
    while ( t-- ){
        string s;
        cin >>  s;
        solve(s);
    }
}