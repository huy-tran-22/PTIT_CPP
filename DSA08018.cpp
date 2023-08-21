#include <bits/stdc++.h>
using namespace std;

void solve (int n){
    queue <string> q;
    q.push("");
    vector <string> res;
    int cnt = 0;
    while (!q.empty()){
        string s = q.front(); q.pop();
        if (s.length() <= n) {
            res.push_back(s);
            cnt ++;
        }
        else break;
        q.push(s + '6');
        q.push(s + '8');
    }
    cout << cnt-1 << endl;
    for ( int i = 1; i < res.size() ; i++){
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