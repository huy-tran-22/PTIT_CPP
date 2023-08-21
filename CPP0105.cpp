#include <iostream>
using namespace std;
int main (){
    int t; cin >> t;
    while ( t-- ){
        string s; cin >> s; int ok = 0;
        for ( int i = 0 ; i < s.length() ; i++){
            if (s[i] != '0' && s[i] != '6' && s[i] != '8'){
                cout << "NO\n"; ok = 1;
                break;
            }
        }
        if (ok==0)cout << "YES\n";
    }
}