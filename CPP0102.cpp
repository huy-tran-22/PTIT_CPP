#include <iostream>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t-- ){
        char x;
        cin >> x;
        if ( ('a') <= x && x <= ('z')){
            x = x - 32;
        }
        else {
            x = x + 32;
        }
        cout << x << endl;
    }
}