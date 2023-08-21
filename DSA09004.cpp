#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int u,e,k;
        cin >> u >> e >> k;
        vector <vector<int>> v;
        v.resize(u+1);
        for ( int i = 0 ; i < e ; i++){
            int l,r;
            cin >> l >> r;
            v[l].push_back(r);
            v[r].push_back(l);
        }
        int vs[u+1];
        memset(vs,0,sizeof(vs));
        stack <int> st;
        vs[k] = 1;
        st.push(k);
        cout << k << " ";
        while (!st.empty()){
            int tmp = st.top();
            st.pop();
            for (int x : v[tmp]){
                if (!vs[x]){
                    vs[x] = 1;
                    cout << x << " ";
                    st.push(tmp);
                    st.push(x);
                    break;
                }
            }
        }
        cout << endl;
    }
}