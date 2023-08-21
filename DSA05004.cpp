#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    int a[n+1],b[n+1]; 
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = 1;
    }
    int res = 1;
    for ( int i = 1 ; i < n ; i++){
        for ( int j = 0 ; j < i ; j++){
            if (a[i] > a[j]){
                b[i] = max(b[i],b[j]+1);
                res = max (res,b[i]);
            }
        }
    }
    cout << res << endl;
}