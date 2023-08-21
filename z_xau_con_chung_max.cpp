#include <bits/stdc++.h>
using namespace std;

int main (){
    string m,n;
    cin >> m >> n;
    int l1 = m.length();
    int l2 = n.length();
    int res[l1+1][l2+1];
    for ( int i = 0 ; i < max(l1,l2) ; i++) {
        res[0][i] = 0;
        res[i][0] = 0;
    }
    for ( int i = 1 ; i <= l1 ; i++){
        for (int j = 1 ; j <= l2 ; j++){
            if (m[i-1] == n[j-1]) res[i][j] = res[i-1][j-1] +1;
            else {
                res[i][j] = max(res[i-1][j], res[i][j-1]);
            }
        }
    }
    cout << res[l1][l2];
}