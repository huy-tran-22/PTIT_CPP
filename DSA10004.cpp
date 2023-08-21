#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int v,e; cin >> v >> e;
        int deg[v+1];
        memset(deg,0,sizeof(deg));
        while (e--){
            int x,y; cin >> x >> y;
            deg[x]++;
            deg[y]++;
        }
        int cnt = 0;
        for (int i = 1 ; i <= v ; i++){
            if (deg[i] % 2 == 1) cnt++;
        }
        if (cnt == 0) cout << 2 << endl;
        else if (cnt == 2) cout << 1 << endl;
        else cout << 0 << endl;
    }
}