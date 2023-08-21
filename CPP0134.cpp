#include <iostream> 
#include <math.h> 
using namespace std; 
int main(){ 
    int t; cin>>t;
    while(t--){ 
        int n,k; cin>>n>>k; 
        int res=-1; 
        for (int i=2; i <= sqrt(n); i++){ 
            while( n % i == 0){ 
                n/=i; k--; 
                if (k == 0){ 
                    res = i; break; 
                    } 
                } 
            } 
            if (n!=1 && k==1) res=n; 
            cout<<res<<endl; } }