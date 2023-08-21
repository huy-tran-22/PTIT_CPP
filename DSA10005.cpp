#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >>  t;
    while (t--){
        int v,e;
        cin >> v >> e;
        int degv[v+1], degr[v+1];
        memset(degv,0,sizeof(degv));
        memset(degr,0,sizeof(degr));
        while (e--){
            int x,y;
            cin >> x >> y;
            degr[x]++;
            degv[y]++;
        }
        int ok = 1;
        for (int i = 1 ; i <= v ; i++){
            if(degv[i] != degr[i] || degv[i] == 0 || degr[i] == 0){
                ok = 0;
            }
        }
        // for (int i = 1 ; i <= v ; i++){
        //     cout << degv[i] << "  " << degr[i] << endl;
        // }
        if (ok) cout << "1" << endl;
        else cout << "0" << endl;
    }
}