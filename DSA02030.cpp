#include <bits/stdc++.h>
using namespace std;

vector <int> check ;
string a = "";
int k;
char c;

void Try(char i){
    for ( char j = i ; j <= c ; j++){
        a += j;
        if (a.length() == k){
            cout << a << endl;
        }
        else {
            Try(j);
        }
        a.pop_back();
    }
}

int main (){
    cin >> c >> k;
    Try('A');
}