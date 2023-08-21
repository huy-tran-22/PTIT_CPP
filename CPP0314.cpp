#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    set<string>s;
    cin.ignore();
    while ( t-- ){
        string x; getline(cin,x);
        s.insert(x);
    }
    cout << s.size();
}