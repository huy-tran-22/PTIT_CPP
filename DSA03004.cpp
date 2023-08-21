#include <bits/stdc++.h>
using namespace std;

long long trans (int a[],int n){
    long long tong = 0;
    for (int i = 0 ; i < n ;i++){
        tong = tong*10 + a[i];
    }
    return tong;
}
void solve(int a[] , int n){
    int a1[20],a2[20],cnt1 = 0, cnt2 = 0;
    sort(a,a+n);
    for (int i = 0 ; i < n ; i++){
        if(i % 2 == 0) {
            a1[cnt1] = a[i]; cnt1++;
        }
        else {
            a2[cnt2] = a[i]; cnt2++;
        }
    }
    cout << trans(a1,cnt1) + trans (a2,cnt2) << endl;
}
int main (){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0 ; i < n ; i++) cin >> a[i];
        solve(a,n);
    }
}