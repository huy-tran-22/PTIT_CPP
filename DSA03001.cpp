#include <bits/stdc++.h>
using namespace std;

int tien[] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void trans(int n){
    int i = 9;
    int cnt = 0;
    while (n > 0){
        if(n >= tien[i]){
            cnt++;
            n -= tien[i];
        }
        else i--;
    }
    cout << cnt << endl;
}

void trans2(int n){
    int cnt = 0;
    for ( int i = 9 ; i >= 0 ; i--){
        cnt += n/tien[i];
        n %= tien[i];
    }
    cout << cnt << endl;
}
int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        trans(n);
        //trans2(n);
    }
}