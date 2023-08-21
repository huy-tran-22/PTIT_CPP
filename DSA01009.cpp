#include <bits/stdc++.h>
using namespace std;

int a[1000];
int n,k,ok;

void sinh(){
    int i = n;
    while (a[i] == 1 && i > 0) i--;
    if (i < 1) ok = 0;
    a[i] = 1;
    for (int j = i+1 ; j <= n ; j++) a[j] = 0;
}   

int main (){
    cin >> n >> k;
    ok = 1;
    for (int i = 1 ; i <= n ; i++){
        a[i] = 0;
    }
    vector <string> v;
    while (ok){
        sinh();
        int in = 0;
        for (int i = 1 ; i <= n ; i++){
            if (a[i] == 0){
                int cnt = 0;
                int j = i;
                while (a[j] == 0 && j <= n){
                    cnt ++;
                    j++;
                }
                i += cnt;
                if (cnt == k) {
                    string tmp = "";
                    for (int i = 1 ; i <= n ; i++){
                        if (a[i] == 0) tmp += 'A';
                        else tmp += 'B';
                    }
                    v.push_back(tmp); break;
            }
        }
    }
    }
    cout << v.size() << endl;
    for (int i = 0 ; i< v.size() ; i++) cout << v[i] << endl;
}