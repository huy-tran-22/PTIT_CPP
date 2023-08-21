#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,k,tong=0;
    cin >> n >> k;
    int w[n+1],v[n+1];
    for ( int i = 1 ; i <= n ; i++) cin >> w[i];
    for ( int i = 1 ; i <= n ; i++) cin >> v[i];
    int res[n+1][k+1];
    memset(res,0,sizeof(res));
    for ( int i = 1 ; i <= n ; i++){
        for ( int j = 1; j <= k ; j++){
            res[i][j] = res[i-1][j];
            if (j >= w[i]){
                res[i][j] = max(res[i][j] , res[i-1][j-w[i]] + v[i]);
                tong = max(tong,res[i][j]);
            }
        }
    }
    // for ( int i = 0 ; i <= n ; i ++){
    //     for ( int j = 0 ; j <= k ; j++){
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "\nDap so la: ";
    cout << tong;
}