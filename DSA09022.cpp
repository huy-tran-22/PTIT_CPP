#include <bits/stdc++.h>
using namespace std;

int u,e,k;
vector <vector<int>> v;
vector <int> vs;

void DFS(){
    stack <int> st;
    st.push(k);
    vs[k] = 1;
    cout << k << " ";
    while (!st.empty()){
        int tmp = st.top(); st.pop();
        for (int i : v[tmp]){
            if (!vs[i]){
                vs[i] = 1;
                cout << i << " ";
                st.push(tmp);
                st.push(i);
                break;
            }
        }
    }
}
int main (){
    int t; cin >> t;
    while (t--){
        cin >> u >> e >> k;
        v.clear(); vs.clear();
        v.resize(u+1);
        vs.resize(u+1,0);
        for ( int i = 0 ; i < e ; i++){
            int l,r;
            cin >> l >> r;
            v[l].push_back(r);
        }
        DFS();
        cout << endl;
    }
}