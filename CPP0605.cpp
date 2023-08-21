#include <bits/stdc++.h>
using namespace std;

class phanso {
    private:
        int tu,mau;
    public:
        phanso(int tu, int mau){
            this -> tu = tu = 1; this -> mau = mau = 1;
        }
        friend istream& operator >> ( istream & , phanso&);
        friend ostream& operator << ( ostream & , phanso);
        void rutgon();
};

istream & operator >> ( istream & in , phanso &a){
    in >> a.tu >> a.mau;
    return in;
}
ostream & operator << ( ostream & out , phanso a){
    out << a.tu << "/" << a.mau ;
    return out;
}

int gcd (int a, int b){
    if ( b == 0) return a;
    else return gcd(b,a%b);
}
void phanso :: rutgon (){
    int k = gcd(tu,mau);
    tu/=k;
    mau/=k;
}
int main (){
    phanso p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;    
}

