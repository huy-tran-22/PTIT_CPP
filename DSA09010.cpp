#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> G;
vector <bool> vs;
int v,e; 

void BFS(int k){
    queue <int> q;
    q.push(k);
    while (!q.empty()){
        int u = q.front();
        q.pop();
        vs[u] = true;
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
        G.clear(); G.resize(v+10);
        while (e--){
            int x,y; cin >> x >> y;
            G[x].push_back(y);
        }
        int ok = 1;
        for (int i = 1 ; i <= v ; i++){
            vs.clear(); vs.resize(v+10,false);
            BFS(i);
            for (int j = 1 ; j <= v ; j++){
                if (!vs[j]){
                    ok = 0;
                    break;
                }
            }
        }
        if (ok){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}