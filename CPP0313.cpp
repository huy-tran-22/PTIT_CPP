#include <bits/stdc++.h>
using namespace std;

int main (){
    string s,k;
    getline(cin,s);
    cin >> k;
    string tmp;
    stringstream a (s);
    while ( a >> tmp ){
        if ( tmp != k) cout << tmp << " ";
    }
}