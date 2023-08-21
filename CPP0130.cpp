#include <iostream> 
#include <cmath> 
using namespace std; 
typedef unsigned long long int ull; 
void solve(ull n) { 
    while(n%2==0) { 
        n/=2; cout << 2 << " "; } 
    for(ull i=3;i<=sqrt(n);i+=2) { 
        while(n%i==0){ n/=i; cout << i << " "; } } 
        if(n>1) cout << n; } 
int main() { 
    int t; ull n; cin>>t; 
    while(t--) { 
        cin>>n; solve(n); 
        cout<< endl; } 
        return 0; }