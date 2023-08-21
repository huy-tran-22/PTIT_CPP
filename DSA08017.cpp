#include <bits/stdc++.h>
using namespace std;

void solve (int n){
    queue <string> q;
    q.push("");
    vector <string> res;
    while (!q.empty()){
        string s = q.front(); q.pop();
        if (s.length() <= n) res.push_back(s);
        else break;
        q.push(s + '6');
        q.push(s + '8');
    }
    for ( int i = res.size() - 1; i > 0 ; i--){
        cout << res[i] << " ";
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        solve (n);
        cout << endl;
    }
}