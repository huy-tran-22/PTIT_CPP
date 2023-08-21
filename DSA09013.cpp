#include <bits/stdc++.h>
using namespace std;

int u,e,x,y;
int lthong;
vector <vector<int>> v;
vector <pair<int,int>> res;
vector <int> vs;

void BFS(int k){
    queue <int> st;
    vs[k] = 1;
    st.push(k);
    while (!st.empty()){
    int tmp = st.front();
    vs[tmp] = 1;
    st.pop();
    for (int i : v[tmp]){
        if ((i == x && tmp == y) || (i == y && tmp == x)) continue;
        if (!vs[i]){
            vs[i] = 1;
            st.push(i);
        }
    }
}
}
void solve (){
    vs.clear();
    vs.resize(u+1,0);
    int cnt = 0;
    for ( int i = 1 ; i <= u ; i++){
        if (!vs[i]){
            BFS(i);
            cnt++;
        }
    }
    if (cnt > lthong){
        cout << x << " " << y << " ";
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> u >> e;
        v.clear();
        v.resize(u+1);
        vs.clear();
        vs.resize(u+1,0);
        res.clear();
        res.resize(e+1);
        lthong = 0, x = -1 , y = -1;
        for ( int i = 0 ; i < e ; i++){
            int l,r;
            cin >> l >> r;
            v[l].push_back(r);
            v[r].push_back(l);
            res.push_back({l,r});
        }
        for ( int i = 1 ; i <= u ; i++){
            if (!vs[i]){
                BFS(i);
                lthong ++;
            }
        }
        for ( int i = 1 ; i <= res.size() ; i++){
            x = res[i].first;
            y = res[i].second;
            solve();
        }
        cout << endl;
    }
}