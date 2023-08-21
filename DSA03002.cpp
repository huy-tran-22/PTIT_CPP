#include <bits/stdc++.h>
using namespace std;

void solve(int m , int n){
    int min,max;
    int a[10],b[10];
    int cnt=0;
    while ( m > 0){
        a[cnt] = m%10;
        m /= 10;
        b[cnt] = n%10;
        n/=10;
        cnt++;
    }
    int x = 0; int y = 0;
    for ( int i = cnt-1 ; i >= 0 ; i--){
        if (a[i] == 6) a[i] = 5;
        x = x*10 + a[i];
        if (b[i] == 6) b[i] = 5;
        y = y*10 +b[i];
    }
    min = x+y; cout << min << " ";
    x = 0; y = 0; 
    for ( int i = cnt-1 ; i >= 0 ; i--){
        if (a[i] == 5) a[i] = 6;
        x = x*10 + a[i];
        if (b[i] == 5) b[i] = 6;
        y = y*10 +b[i];
    }
    max = x + y; cout << max;
}
int main (){
    int a,b;
    cin >> a >> b;
    solve(a,b);
}