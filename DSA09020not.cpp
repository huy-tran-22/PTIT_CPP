#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    int a[n+1][n+1];
    memset(a,0,sizeof(a));
    for ( int i = 1 ; i <= n ; i++){
        int l,r; cin >> l >> r;
        a[l][r] = 1;
        a[r][l] = 1;
    }
    for ( int i = 1 ; i <= n ; i++){
        for ( int j = 1 ; j <= n ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}