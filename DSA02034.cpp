#include <bits/stdc++.h>
using namespace std;
int n;
vector <bool> vs;
vector <int> a;

void in(){
    for ( int i = 1 ; i < n ; i++){
        if(abs(a[i] - a[i+1]) == 1) return;
    }
    for ( int i = 1 ; i <= n ; i++)
        cout << a[i];
    cout << endl;
}
void Try(int k){
    for ( int i = 1 ; i <= n ; i++){
        if(!vs[i]){
            a[k] = i;
            vs[i] = true;
            if (k == n) in();
            else Try(k+1);
            vs[i] = false;
        }
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> n;
        a.resize(n + 1);
        vs.resize(n + 1, false);
        Try(1);
    }
}   