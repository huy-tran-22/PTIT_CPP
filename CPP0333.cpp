#include <bits/stdc++.h>
using namespace std;

int main (){
    string s; getline(cin,s);
    for ( int i = 0 ; i < s.length() ; i++){
        s[i] = tolower(s[i]);
    }
    vector <string> v;
    string tmp;
    stringstream a (s);
    while ( a >> tmp){
        v.push_back(tmp);
    }
    for ( int i = 0 ; i < v.size() - 1 ; i++){
        v[i][0] = toupper (v[i][0]);
    }
    for ( int i = 0 ; i < v[v.size() - 1].length() ; i++){
        v[v.size()-1][i] = toupper(v[v.size()-1][i]);
    }
    for ( int i = 0 ; i < v.size() - 1 ; i++){
        if ( i != v.size() - 2 )
            cout << v[i] << " ";
        else cout << v[i] << ", ";
    }
    cout << v[v.size()-1];
}