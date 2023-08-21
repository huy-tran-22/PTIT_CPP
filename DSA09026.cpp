#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> G;
vector <bool> vs;
vector <int> fa;
int v,e,s,t;

void BFS(int s){
    queue <int> st;
    st.push(s);
    while (!st.empty()){
        int u = st.front(); st.pop();
        vs[u] = true;
        if (u == t) return;
        for (int i : G[u]){
            if (!vs[i]){
                vs[i] = true;
                st.push(i);
                fa[i] = u;
            }
        }
    }
}

void Path(){
    if (!vs[t]) {
        cout << -1;
        return;
    }
    stack <int> way;
    int p = t;
    while (p != -1){
        way.push(p);
        p = fa[way.top()];
    }
    while (!way.empty()){
        cout << way.top() << " ";
        way.pop();
    }
}

int main (){
    int tc; cin >> tc;
    while (tc--){
        cin >> v >> e >> s >> t;
        G.clear(); G.resize(v+1);
        vs.clear(); vs.resize(v+1);
        fa.clear(); fa.resize(v+1,-1);
        while (e--){
            int x,y; cin >> x >> y;
            G[x].push_back(y);
        }
        BFS(s);
        Path();
        cout << endl;
    }
}