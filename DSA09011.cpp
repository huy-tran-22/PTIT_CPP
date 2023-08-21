#include <bits/stdc++.h>
using namespace std;

int G[1000][1000];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int m,n;

void DFS(int i, int j){
    G[i][j] = 0;
    for (int k = 0 ; k < 8 ; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 1 && x <= m && y >= 1 && y <= n && G[x][y]){
            DFS(x,y);
        }
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> m >> n;
        for (int i = 1 ; i <= m ; i++){
            for (int j = 1 ; j <= n ; j++){
                cin >> G[i][j];
            }
        }
        int cnt = 0;
        for(int i = 1 ; i <= m ; i++){
            for (int j = 1 ; j <= n ; j++){
                if (G[i][j]){
                    cnt++;
                    DFS(i,j);
                }
            }
        }
        cout << cnt << endl;
    }
}