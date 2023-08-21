#include <bits/stdc++.h>
using namespace std;

string res="";
char x;
int vs[100];

void in(){
    for (int i = 1 ; i < res.length()-1 ; i++){
        if ((res[i] == 'A' && res[i-1] != 'E' && res[i+1] != 'E') || (res[i] == 'E' && res[i-1] != 'A' && res[i+1] != 'A' ))
            return;
    }
    cout << res << endl;
}
void Try (char a){
    for (char i = 'A' ; i <= x ; i++){
        if(!vs[i]){
            res += i;
            vs[i] = 1;
            if (a == x){
                in();
            }
            else {
                Try(a+1);
            }
            vs[i] = 0;
            res.pop_back();
        }
    }
}
int main (){
    for (int i = 0 ; i < 100 ; i ++){
        vs[i] = 0;
    }
    cin >> x;
    Try('A');
}