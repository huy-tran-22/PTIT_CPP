#include <bits/stdc++.h>
using namespace std;

void solve (string s){
    stack <string> st;
    string res ="";
    for (int i = s.length() - 1; i >= 0 ; i--){
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' ){
            string ft = st.top() ; st.pop();
            string sn = st.top() ; st.pop();
            string tmp = '(' + ft + s[i] + sn +')';
            st.push(tmp);
        }
        else {
            st.push(string(1,s[i]));
        }
    }
        cout << st.top();
}

int main (){
    int t; cin >> t;
    while (  t-- ){
        string s; cin >> s;
        solve(s);
    }
}