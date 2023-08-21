#include <bits/stdc++.h>
using namespace std;

int main () {
    string s; cin >> s;
    vector <char> v;
    for ( int i = 0 ; i < s.length() ; i++){
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            v.push_back(s[i]);
        }
    }
    for ( int i = 0 ; i < v.size() ; i++){
        cout << "." << v[i];
    }
}