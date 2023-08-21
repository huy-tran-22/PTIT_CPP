#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    cin.ignore();
    while ( t--){
        string s; getline(cin,s) ;
        vector <string> v;
        stringstream tmp(s);
        string x;
        while ( tmp >> x){
            v.push_back(x);
        }
        for ( int i = v.size() - 1 ; i >= 0 ; i--){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}