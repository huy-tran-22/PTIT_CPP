#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int u,e;
        cin >> u >> e;
        vector <vector<int>> v;
        v.resize(u+1);
        // vector<int> v[u+1];
        for ( int i = 0 ; i < e ; i++){
            int l,r;
            cin >> l >> r;
            v[l].push_back(r);
            v[r].push_back(l);
        }
        for (int i = 1 ; i <= u ; i++){
            cout << i << ": ";
            for (int x : v[i]){
                cout << x << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}