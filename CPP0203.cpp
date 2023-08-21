#include <bits/stdc++.h>
using namespace std;

int k[1000001] = {0};
int main (){
    int t; cin >> t;
    while ( t-- ){
        memset(k,0,sizeof(k));
        int n; cin >> n;
        for ( int i = 0 ; i < n ; i++ ){
            int x; cin >> x;
            if (x > 0) k[x] = 1;
        }
        for ( int i = 1 ; i < 1000001 ; i++){
            if ( k[i] == 0) {
                cout << i << endl;
                break;
            }
        }
    }
}