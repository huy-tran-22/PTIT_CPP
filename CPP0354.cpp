#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        string s; cin >> s;
        int i = 0;
        for ( int i = 0 ; i < s.length() ; i++){
            int k = 1;
            while (s[i] == s[i+1]){
                i++;
                k++;
            }
            cout << s[i] << k;
        }
        cout << endl;
    }
}