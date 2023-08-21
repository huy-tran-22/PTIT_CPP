#include <bits/stdc++.h>
using namespace std;

bool solve (string s){
    stack <char> st;
    if (s[0] == ')' || s[0] == ']' || s[0] == '}') return false;
    for (int i = 0 ; i < s.length() ; i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
        else {
            if (s[i] == ')' && st.top() == '(' ) st.pop();
            else if (s[i] == ']' && st.top() == '[' ) st.pop();
            else if (s[i] == '}' && st.top() == '{' ) st.pop();
            else return false;
        }
    }
    if (st.size() == 0) return true;
    else return false;
}

int main (){
    int t; cin >> t;
    while ( t-- ){
        string s; cin >> s;
        if (solve(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}