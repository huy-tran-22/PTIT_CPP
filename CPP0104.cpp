#include <iostream>
using namespace std;

int main (){
    int n; cin >> n;
    long long t = 1 , tmp = 1;
    for (int i = 2 ; i <= n ; i++){
        tmp *= i;
        t += tmp;
    }
    cout << t << endl;
}

