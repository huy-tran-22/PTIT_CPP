#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> G;
vector <bool> vs;
int v,e;

void BFS(int k){
    queue <int> q;
    q.push(k);
    vs[k] = true;
    while (!q.empty()){
        int u = q.front(); q.pop();
        for (int i : G[u]){
            if (!vs[i]){
                vs[i] = true;
                q.push(i);
            }
        }
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> v >> e;
        G.clear();
        G.resize(v+1);
        vs.clear();
        vs.resize(v+1,false);
        while (e--){
            int x,y; cin >> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        int cnt = 0;
        for (int i = 1 ; i <= v ; i++){
            if (!vs[i]){
                BFS(i);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}