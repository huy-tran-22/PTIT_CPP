#include <bits/stdc++.h>
using namespace std;

void nhap (int n , int a[1001][3]){
        for ( int i = 0 ; i < n ; i++){
            for ( int j = 0 ; j < 3 ; j++){
                cin >> a[i][j];
            }
        }
}

int main (){
    int n; cin >> n;
    int a[1001][3];
    nhap(n,a);
    int k = 0;
    for ( int i = 0 ; i < n ; i++){
        int cnt = 0;
        for ( int j = 0 ; j < 3 ; j++){
            if (a[i][j] == 1) cnt ++;
        }
        if ( cnt >= 2) k++;
    }
    cout << k <<endl;
}