#include <bits/stdc++.h>
using namespace std;

void solve ( string s){
    int ok = 1;
    for (int i = 0 ; i < s.length()-1 ; i++){
        if (abs(s[i] - s[i+1]) > 1 || (s[i] - s[i+1]) == 0){
            cout << "NO\n";
            ok = 0;
            break;
        }
    }
    if ( ok == 1) cout << "YES\n";
}
int main (){
    int t; cin >> t;
    while ( t-- ){
        string s;
        cin >> s;
        solve (s);
    }
}