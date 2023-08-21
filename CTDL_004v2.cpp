#include <bits/stdc++.h>
using namespace std;

int n,k;
vector <int> a,b,c;
int cnt;

void in(){
    vector <int> tmp = c;
    sort(tmp.begin(),tmp.end());
    if (tmp == c) cnt++;
}

void Try(int i){
    for (int j = b[i-1]+1 ; j <= n-k+i ; j++){
        b[i] = j;
        c[i] = a[b[i]];
        if (i == k){
            in();
        }
        else Try(i+1);
    }
}

int main (){
    cin >> n >> k;
    a.resize(n+1);
    b.resize(k+1,0);
    c.resize(k+1,0);
    cnt = 0;
    for (int i = 1 ; i <= n ; i++) cin >> a[i];
    Try(1);
    cout << cnt << endl;
}