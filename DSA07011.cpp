#include <bits/stdc++.h>
using namespace std;

void solve (string s){
    stack <string> st;
    for ( int i = 0 ; i < s.length() ; i++){
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            string ft = st.top(); st.pop();
            string nd = st.top() ; st.pop();
            string tmp = s[i] + nd + ft;
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
    while (t--){
        string s; cin >> s;
        solve (s);
        cout << endl;
    }
}