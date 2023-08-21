#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    cin.ignore();
    while ( t--){
        string s; getline (cin,s);
        int t = 0;
        string tmp;
        stringstream k (s);
        while ( k >> s){
            t++;
        }
        cout << t << endl;
    }
}