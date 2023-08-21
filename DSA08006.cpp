#include <bits/stdc++.h>
using namespace std;

string solve (int n){
    queue <string> q;
    q.push("9");
    while ( !q.empty() ){
        string s = q.front(); q.pop();
        long long tmp = 0;
        for ( int i = 0 ; i < s.length() ; i++){
            tmp = tmp * 10 + (int)(s[i] - '0');
        }
        tmp %= n;
        if (tmp == 0) return s;
        q.push(s + "0");
        q.push(s + "9");
    }
    return 0;
}

int main (){
    int t; cin >> t;
    while ( t-- ){
        int n; cin >> n;
        cout << solve (n) << endl;
    }
}