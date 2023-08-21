#include <bits/stdc++.h>
using namespace std;

int n,k;
string s;
vector <string> res;

void in (){
    string tmp = "";
    for (int i = 0 ; i < k ; i++) tmp += 'A';
    int pos = s.find(tmp,0);
    if (pos != -1){
        string sub = s.substr(pos+1);
        if (sub.find(tmp,0) == -1){
            res.push_back(s);
        }
    }
}

void Try(int i){
    for (char j = 'A' ; j <= 'B' ; j++){
        s[i] = j;
        if (i == n-1){
            in();
        }
        else Try(i+1);
    }
}

int main (){
    cin >> n >> k;
    s.resize(n);
    Try(0);
    cout << res.size() << endl;
    for (string i : res){
        cout << i << endl;
    }
}