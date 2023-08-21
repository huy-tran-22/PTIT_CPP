#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int s,d;
        cin >> s >> d;
        pair <int,int> a,b;
        a = {s,0};
        map <int,bool> mp;
        int ok = 0;
        queue <pair<int,int>> q;
        q.push(a);
        while (!q.empty() && ok == 0){
            pair <int,int> x = q.front();
            q.pop();
            if (x.first == d){
                ok = 1;
                cout << x.second  + 1 << endl;
            }
            else if (x.first * 2 == d || x.first - 1 == d){
                ok = 1;
                cout << x.second + 1 << endl;
            }
            if (x.first * 2 <= d * 2 && mp[x.first * 2] == 0){
                q.push({x.first * 2,x.second + 1});
                mp[x.first * 2] = 1;
                }
            if (x.first - 1 >= 0 && mp[x.first - 1] == 0){
                q.push({x.first-1,x.second + 1});
                mp[x.first-1] = 1;
                }
        }
    }
}