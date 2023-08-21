#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> G;
vector <bool> vs;
vector <int> father;
int v,e,s,t;

void DFS(int s){
    stack <int> st;
    st.push(s);
    while (!st.empty()){
        int u = st.top(); st.pop(); 
        vs[u] = true;
        if (u == t) return;
        for (int i : G[u]){
            if (!vs[i]){
                vs[i] = true;
                st.push(u);
                st.push(i);
                father[i] = u;
                break;
            }
        }
    }
}

void Path(){
    if (!vs[t]) {
        cout << "-1";
        return;
    }
    stack <int> path;
    int p = t;
    while (p != -1){
        path.push(p);
        p = father[path.top()];
    }
    while (!path.empty()){
        cout << path.top() << " ";
        path.pop();
    }
}

int main (){
    int tc; cin >> tc;
    while (tc--){
            cin >> v >> e >> s >> t;
    vs.clear(); father.clear();
    vs.resize(v+1,false);
    G.clear(); G.resize(v+1);
    father.resize(v+1,-1);
    while (e--){
        int x,y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    DFS(s);
    Path();
    cout << endl;
    }
}