#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n,v; cin >> n >> v;
        int m[n+1], val[n+1];
        for (int i = 1 ; i <= n ; i++) cin >> m[i];
        for (int i = 1 ; i <= n ; i++) cin >> val[i];
        int res[n+1][v+1] ;
        int Max = 0;
        memset(res,0,sizeof(res));
        for (int i = 1 ; i <= n ; i++){
            for (int j = 1 ; j <= v ; j++){
                res[i][j] = res[i-1][j];
                if (m[i] <= j){
                    res[i][j] = max(res[i][j], res[i-1][j-m[i]] + val[i]);
                }
                Max = max(Max,res[i][j]);
            }
        }
        cout << Max << endl;
    }
}