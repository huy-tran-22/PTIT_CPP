#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
int main (){
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        priority_queue <int,vector<int>,greater<int>> q;
        for (int i = 0 ; i < n ; i++){
            long long x; cin >> x;
            q.push(x);
        }
        long long res = 0;
        while (q.size() != 1){
            long long st = q.top(); q.pop();
            long long nd = q.top(); q.pop();
            long long tmp = (st + nd) % mod;
            res = (res + tmp) % mod;
            q.push(tmp);
        }
        cout << res << endl;
    }
}