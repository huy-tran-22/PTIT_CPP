#include <bits/stdc++.h>
using namespace std;

int solve ( int x){
    int c = 0 , l = 0;
    while (x > 0){
        int n = x % 10;
        if (n % 2 == 0) c++;
        else l++;
        x /= 10;
    }
    if ( l == c ) return 1;
    return 0;

}
int main (){
    int t; cin >> t;
    int ok = 1;
    for ( int i = pow(10,t-1) ; i < pow (10,t) ; i++){
        if (solve (i)) {
            cout << i << " ";
            ok ++;}
        if (ok == 11){
            cout << endl;
            ok = 1;
        }
    }
}