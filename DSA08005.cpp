#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        for ( int i = 1 ; i <= n ; i++){
            stack <int> q;
            int j = i;
            while ( j > 0 ){
                q.push(j%2);
                j /= 2;
            }
            while ( !q.empty() ){
                cout << q.top(); q.pop();
            }
            cout << " ";
        }
        cout << endl;
    }
}