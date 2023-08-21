#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        string s;
        cin >> s;
        int k = s.find("084");
        s.erase(k,3);
        cout << s << endl;
}}