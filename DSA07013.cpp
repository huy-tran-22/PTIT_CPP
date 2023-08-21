#include <bits/stdc++.h>
using namespace std;

void solve (string s){
    stack <int> st;
    for (int i = 0; i < s.length() ; i++){
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            int nd = st.top(); st.pop();
            int ft = st.top(); st.pop();
            int tmp;
            if (s[i] == '+') tmp = ft + nd;
            else if (s[i] == '-') tmp = ft - nd;
            else if (s[i] == '*') tmp = ft * nd;
            else if (s[i] == '/') tmp = ft / nd;
            else tmp = pow(ft,nd);
            st.push(tmp);
        }
        else {
            st.push(s[i] - '0');
        }
    }
    cout << st.top();
}

int main (){
    int t; cin >> t;
    while ( t-- ){
        string s; cin >> s;
        solve (s);
        cout << endl;
    }
}