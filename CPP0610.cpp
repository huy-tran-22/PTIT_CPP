#include <bits/stdc++.h>
using namespace std;

class phanso {
    private:
        int tu,mau;
    public:
        phanso(int tu, int mau);
        friend ostream & operator  << (ostream & , phanso);
        friend istream & operator >> (istream & , phanso &);
        friend phanso operator + ( phanso , phanso);
};
phanso :: phanso ( int tu , int mau){
        this -> tu = tu;
        this -> mau = mau;
    }
ostream &operator << (ostream& out , phanso a){
    out << a.tu << "/" << a.mau;
    return out;
}
istream &operator >> (istream & in , phanso &a){
    in >> a.tu >> a.mau;
    return in;
}

int gcd ( int a , int b){
    if ( b == 0) return a;
    else return gcd (b,a%b);
}
int lcm ( int a , int b){
    return a*b/gcd(a,b);
}

phanso operator + (phanso a , phanso b){
    phanso tong(1,1);
    int k = lcm(a.mau , b.mau);
    tong.tu = a.tu * (k/a.mau) + b.tu * (k/b.mau);
    tong.mau = k;
    int l = gcd (tong.tu , tong.mau);
    tong.tu /= l;
    tong.mau /= l;
    return tong;
}

int main() {
	phanso p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}