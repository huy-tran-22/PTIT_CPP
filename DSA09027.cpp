#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> G;
vector <bool> vs;
int m,n,x,y;

void BFS(int x){
    queue <int> q;
    q.push(x);
    vs[x] = true;
    if (x == y) return;
    while (!q.empty()){
        int u = q.front(); q.pop();
        for (int v : G[u]){
            if (!vs[v]){
                vs[v] = true;
                q.push(v);
            }
        }
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> m >> n;
        G.clear(); G.resize(m+1);
        while (n--){
            int l,r; cin >> l >> r;
            G[l].push_back(r);
            G[r].push_back(l);
        }
        int tv; cin >> tv;
        while (tv--){
            vs.clear(); vs.resize(m+1,false);
            cin >> x >> y;
            BFS(x);
            if (!vs[y]) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}