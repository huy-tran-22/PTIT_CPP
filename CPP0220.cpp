#include <bits/stdc++.h>
using namespace std;

void nhap ( int m , int n , int a[100][100]){
        for ( int i = 0 ; i < m ; i++){
            for ( int j = 0 ; j < n ; j++){
                cin >> a[i][j];
            }
        }
}
void xuat ( int m , int n , int b[100][100]){
    for ( int i = 0 ; i < m ; i ++){
        for ( int j = 0 ; j < n ; j++){
            cout << b[i][j] << " ";
            }
            cout << endl;
        }
}

int main (){
    int t; cin >> t;
    while ( t-- ){
        int n; cin >> n;
        int a[100][100];
        nhap(n,n,a);
        for ( int i = 0 ; i < n ; i++){
            for ( int j = 0 ; j < n ; j++){
                if ( i == 0 || i == n-1){
                    cout << a[i][j] << " ";
                }
                else if ( j == 0 || j == n-1){
                    cout << a[i][j] << " ";
                }
                else cout << "  ";
            }cout << endl;
        }
    }
}