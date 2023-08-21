#include <bits/stdc++.h>
using namespace std;

bool cmp (int a, int b){
    return a > b;
}

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n+1],b[n+1];
        for (int i = 0 ; i < n ; i++) cin >> a[i];
        for (int i = 0 ; i < n ; i++) cin >> b[i];
        sort(a,a+n);
        sort(b,b+n,cmp);
        for (int i = 0 ; i < n ; i++){
            int tmp = a[i] * b[i];
            t += tmp;
        }
        cout << t << endl;
    }
}