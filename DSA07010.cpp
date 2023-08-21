#include <bits/stdc++.h>
using namespace std;


void solve (string s){
    stack <string> st;
    for (int i = s.length() - 1; i >= 0 ; i--){
        if (s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            string ft = st.top(); st.pop();
            string sn = st.top() ; st.pop();
            string tmp = ft + sn +s[i];
            st.push(tmp);
        }
        else {
            st.push(string(1,s[i]));
        }
    }
    while (!st.empty()){
        cout << st.top();
        st.pop();
    }
}
int main (){
    int t; cin >> t;
    while ( t-- ){
        string s; cin >> s;
        solve (s);
        cout << endl;
    }
}