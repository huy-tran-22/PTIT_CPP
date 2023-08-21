#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    int i = 3;
    int t = 0;
    if ( n % 2 == 0) cout << "2 ";
    while ( n % 2 == 0){
        n /= 2;
        t ++;
    }
    if (t > 0) cout << t<<endl;
    for (int i = 3 ; i <= sqrt(n) ; i+=2){
        if (n % i == 0){
            int k = 0;
            while ( n % i == 0){
                k++;
                n /= i;
            }
            cout << i << " " << k << endl;
        }
    }
    if ( n > 1) cout << n << " " << "1\n";
}