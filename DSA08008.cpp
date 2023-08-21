#include <bits/stdc++.h>
using namespace std;

long long solve (int n){
    queue <long long> q;
    q.push(1);
    while (!q.empty()){
        long long s = q.front(); q.pop();
        if (s % n == 0) return s;
        q.push(s*10);
        q.push(s*10+1);
    }
    return 0;
}

int main (){
    int t; cin >> t;
    while ( t-- ){
        int n; cin >> n;
        cout << solve (n) << endl;
    }
}