#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    int a[n] ; set<int> b;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
        b.insert(a[i]);
    }
    for ( int x : b ){
        cout << x << " ";
    }

}