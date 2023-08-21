#include <bits/stdc++.h>
using namespace std;

void testcase(){
    string a,b;
    cin >> a >> b;
    int na = a.length(); int nb = b.length();
    int res = 0;
    int check[na+1][nb+1];
    memset(check,0,sizeof(check));
    for ( int i = 1 ; i <= na ; i ++){
        for ( int j = 1 ; j <= nb ; j++){
            if (a[i-1] == b[j-1]){
                check[i][j] = check[i-1][j-1] + 1;
            }
            else {
                check[i][j] = max(check[i-1][j] , check[i][j-1]);
            }
            res = max (res,check[i][j]);
        }
    }
    cout << res << endl;
}
int main (){
    int t; cin >> t;
    while (t--){
        testcase();
    }
}