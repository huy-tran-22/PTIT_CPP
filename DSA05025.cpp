#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector <long long> v (n+1,0);
        long long tmp = 0;
        for (int i = 1 ; i <= min(3,n) ; i++){
            v[i] = tmp + 1;
            tmp += v[i];
        }
        for (int i = 4 ; i <= n ; i++){
            for (int j = 1 ; j <= 3 ; j++){
                v[i] += v[i-j];
            }
        }
        cout << v[n] << endl;
    }
}