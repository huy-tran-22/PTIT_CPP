#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    while ( n-- ){
        int c = 0 , l = 0 , k = 0;
        char ok;
        do {
            int x;
            cin >> x;
            k++;
            if ( x % 2 == 0) c++;
            else l++;
            ok = getchar();
        }
        while (ok != '\n');
    if (k % 2 == 0 && c > l) cout << "YES\n";
    else if ( k % 2 != 0 && c < l) cout << "YES\n";
    else cout << "NO\n";
    }
}