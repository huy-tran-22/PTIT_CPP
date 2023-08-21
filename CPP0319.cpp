#include <bits/stdc++.h>
using namespace std;

void max (int a, int b){
    int s[a] = {0};
    int tmp = b;
    for ( int i = 0 ; i < a ; i++){
        if ( tmp >= 9){
            s[i] = 9;
            tmp -= 9;
        }
        else if ( tmp > 0){
            s[i] = tmp;
            tmp = 0;
        }
    }
    for ( int j = 0 ; j < a ; j++){
        cout << s[j];
    }
}

void min ( int a , int b){
    int s[a] = {0};
    b--;
    for ( int i = a-1 ; i >= 0 ; i--){
        if (b >= 9) {
            s[i] = 9;
            b -= 9;
        }
        else if (b > 0) {
            s[i] = b;
            b = 0;
        }

    }
    s[0] += 1;
    for ( int i = 0 ; i < a ; i++){
        cout << s[i];
    }
}

int main (){
    int a,b; cin >> a >> b;
    if ( b > 9*a || ( b == 0 && a == 1) ) cout << "-1 -1";
    else {
        min(a,b);
        cout << " ";
        max(a,b);
    }
}