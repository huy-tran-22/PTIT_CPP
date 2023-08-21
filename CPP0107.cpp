#include <bits/stdc++.h>
using namespace std;

int main (){
    map <int,char> d101;
    map <int,char> d102;
    d101[1] = 'A'; d101[2] = 'B'; d101[3]='B'; d101[4]='A' ; d101[5]='D'; d101[6]='C'; d101[7]='C'; d101[8]='A'; d101[9] ='B'; d101[10]='D'; d101[11]='C'; d101[12]='C'; d101[13]='A'; d101[14]='B'; d101[15]='D';
    d102[1] = 'A'; d102[2] = 'C'; d102[3]='C'; d102[4]='A' ; d102[5]='B'; d102[6]='C'; d102[7]='D'; d102[8]='D'; d102[9] ='B'; d102[10]='B'; d102[11]='C'; d102[12]='D'; d102[13]='D'; d102[14]='B'; d102[15]='B';
    int t; cin >> t;
    while ( t-- ){
        string n; cin >> n;
        string s;
        s = 'd'+n;
        float diem = 0;
    if (s == "d101"){
        for ( int i = 1 ; i <= 15 ; i++){
            char x;
            cin >> x;
            if (d101[i] == x){
                diem += (float) 10/15;
            }
        }
    }
    else{
        for ( int i = 1 ; i <= 15 ; i++){
            char x;
            cin >> x;
            if (d102[i] == x){
                diem += (float) 10/15;
            }
        }

    }
    cout << fixed << setprecision(2) << diem << endl;
}}
