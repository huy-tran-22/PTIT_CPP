#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t ;
    while ( t -- ){
        int n; cin >> n;
        set<int> se;
        int  min = INT_MAX , max = INT_MIN;
        for ( int i = 0 ; i < n ; i++){
            int x; cin >> x;
            if (x > max) max = x;
            if (x < min) min = x;
            se.insert(x);
        }
        cout << ((max-min+1) - se.size()) << endl;
    }
}