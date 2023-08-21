#include <bits/stdc++.h>
using namespace std;

vector <vector <int>> G;
vector <int> vs;
int v,e,k;

void BFS(){
    queue <int> q;
    q.push(k);
    vs[k] = 1;
    cout << k << " ";
    while (!q.empty()){
        int u = q.front(); q.pop();
        for (int i : G[u]){
            if (!vs[i]){
                q.push(i);
                vs[i] = 1;
                cout << i << " ";
            }
        }
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> v >> e >> k;
        vs.clear();
        vs.resize(v+1,0);
        G.clear(); G.resize(v+1);
        for (int i = 1 ; i <= e ; i++){
            int x,y; cin >> x >> y;
            G[x].push_back(y);
        }
        BFS();
        cout << endl;
    }
}

