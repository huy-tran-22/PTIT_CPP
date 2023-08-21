// an cap nha k ke nhau
#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int t = 0;
        int a[n+1], b[n+1];
        for (int i = 0 ; i < n ; i++){
            cin >> a[i];
            b[i] = 0;
        }
        for (int i = 2 ; i < n ; i++){
            b[i] = b[i-2] + a[i-2];
            t = max (t,b[i]);
        }
        cout << t << endl;
    }

}