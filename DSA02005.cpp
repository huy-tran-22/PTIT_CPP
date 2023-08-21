#include <bits/stdc++.h>
using namespace std;

int ok = 0;
string s;
void Swap(){
    int i = s.size() - 1;
    while (s[i] < s[i-1] && i > 0){
        i--;
    }
    i--;
    if (i < 0) {
        ok = 1;
    }
    else {
        int j = s.size()-1;
        while (s[i] > s[j]) j--;
        swap(s[i],s[j]);
        int l = i+1 , r = s.size() - 1;
        while (l < r){
            swap(s[l],s[r]);
            l++; r--;
        }
    }
}

int main(){
    int t; cin >> t;
    while ( t-- ){
        ok = 0;
        cin >> s;
        set <char> se;
        for ( int i = 0 ; i < s.size() ; i++){
            se.insert(s[i]);
        }
        int cnt = 0;
        for ( int x : se){
            s[cnt++] = x;
        }
        while (!ok){
            cout << s << " ";
            Swap();    
        }
        cout << endl;
    }
}