#include <bits/stdc++.h>
using namespace std;

void move (int n , string a , string b){
    cout << a << " -> " << b << endl;
}

void Try(int n , string a, string b, string c){
    if (n==1) {
        move(1,a,c);
        return;
    }
    else {
        Try(n-1 , a , c , b);
        move (n , a , c);
        Try(n-1 , b , a , c);
    }
}

int main (){
    string a = "A" ; string b = "B" ; string c = "C";
    int n; cin >> n;
    Try(n,a,b,c);
}