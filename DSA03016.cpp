#include <bits/stdc++.h>
using namespace std;

int n,s;
int a[1000];

void solve(int k){
    for (int i = 9 ; i >= 0 ; i--){
        a[k] = i;
        if (k == s){
            int tmp = 0;
            for (int j = 1 ; j <= s ; j ++){
                tmp += a[j];
            }
            if (tmp == n && a[s] != 0){
                for (int j = s ; j >= 1 ; j--) cout << a[j];
                cout << endl;
            }
        }
        else solve(k+1);
    }
}

#include <bits/stdc++.h>
using namespace std;

int a[1000];
int s,d;
int ok;
void solve (int k){
    for (int i = 9 ; i >= 0 ; i--){
        a[k] = i;
        if (k == d){
            int tmp = 0;
            for (int j = 1 ; j <= s ; j++){
                tmp += a[j];
            }
            if (tmp == s && a[d] != 0 && ok == 0){
                for (int j = d ; j >= 1 ; j--) cout << a[j];
                cout << endl;
                ok = 1;
            }
        }
        else solve (k+1);
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> s >> d;
        ok = 0;
        solve (1);
    }
}
int main (){
    int t; cin >> t;
    while (t--){
        cin >> n >> s;
        solve (1);
    }
}
