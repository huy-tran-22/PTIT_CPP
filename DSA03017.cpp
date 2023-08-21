#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        int d[127] = {0};
        for (char i : s){
            d[i]++;
        }
        priority_queue <int> q;
        for (int i : d){
            if (i > 0) q.push(i);
        }
        while (!q.empty() && n-- ){
            int tmp = q.top(); q.pop();
            tmp -= 1;
            q.push(tmp);
        }
        int ans = 0;
        while (!q.empty()){
            int tmp = q.top(); q.pop();
            ans += tmp * tmp;
        }
        cout << ans << endl;
    }
}