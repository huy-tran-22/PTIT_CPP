#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        queue <string> q;
        int ok = 0;
        q.push("H");
        while (!q.empty() && ok == 0){
            string tmp = q.front();  q.pop();
            if (tmp.size() == n && tmp[0] == 'H'){
                int check = 0;
                if (tmp[tmp.length() - 1] != 'A') check = 1;
                for (int i = 0 ; i < tmp.size()-1 ; i++){
                    if (tmp[i] == 'H' && tmp[i+1] == 'H') check = 1;
                }
                if (check == 0) cout << tmp << endl;
            }
            else {
                q.push(tmp + 'A');
                q.push(tmp + 'H');
            }
        }
    }
}