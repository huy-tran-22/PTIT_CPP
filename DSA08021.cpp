#include <bits/stdc++.h>
using namespace std;

int a[1000][1000],m,n;

struct G {
    int h,c,val;
    G(int h , int c, int val){
        this -> h = h;
        this -> c = c;
        this -> val = val;
    }
};

void solve(){
    queue <G> q;
    int vs[m+1][n+1];
    memset (vs,0,sizeof(vs));
    q.push(G(0,0,0));
    vs[0][0] = 1;
    while ( !q.empty() ){
        G tmp = q.front(); q.pop();
        int i = tmp.h , j = tmp.c;
        if (i == m-1 && j == n-1){
            cout << tmp.val;
            return;
        }
        if ( i + a[i][j] < m && vs[i+a[i][j]][j] == 0){
            vs[i+a[i][j]][j] = 1;
            q.push(G(i+a[i][j] , j , tmp.val+1));
        }
        if ( j + a[i][j] < n && vs[j][j + a[i][j]] == 0){
            vs[j][j + a[i][j]] = 1;
            q.push(G(i , j+a[i][j] , tmp.val+1));
        }
    }
    cout << -1;
    return;
}
int main (){
    int t; cin >> t;
    while ( t-- ){
        cin >> m >> n;
        for ( int i = 0 ; i < m ; i++){
            for ( int j = 0 ; j < n ; j++){
                cin >> a[i][j];
            }
        }
        solve();
        cout << endl;
    }
}
