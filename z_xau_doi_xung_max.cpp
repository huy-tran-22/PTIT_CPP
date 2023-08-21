#include <bits/stdc++.h>
using namespace std;

int main (){
    string s; cin >> s;
    int n = s.length();
    bool res[n+1][n+1];
    int ans = 1;
    memset(res,false,sizeof(res));
    for ( int i = 0 ; i < n ; i++) res[i][i]=true;
    for ( int len = 2 ; len <= n-len+1 ; len++){
        for (int i = 0 ; i < n ; i++){
            int j = i+len - 1;
            if (len == 2 && s[i] == s[j]) res[i][j] = true;
            else {
                res[i][j] = (res[i+1][j-1] && s[i] == s[j]);
            }
            if (res[i][j]) ans = max(ans,len);
        }
    }
    cout << ans;
}