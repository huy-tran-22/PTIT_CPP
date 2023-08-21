#include <bits/stdc++.h>
using namespace std;

int main (){
    string s;
    getline(cin,s);
    for ( int i = 0 ; i < s.length() ; i++){
        s[i] = tolower(s[i]);
    }
    string tmp;
    vector <string> v;
    stringstream a (s);
    while ( a >> tmp ){
        v.push_back(tmp);
    }
    for ( int i = 0 ; i < v[v.size()-1].length() ; i++){
        cout << v[v.size()-1][i];
    }
    for ( int i = 0 ; i < v.size() - 1 ; i++){
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn";
}