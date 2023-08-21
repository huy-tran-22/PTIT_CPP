#include <bits/stdc++.h>
using namespace std;

class sinhvien {
    private : 
        string msv,ht,lop;
        float gpa;
    public:
        sinhvien (){
            msv = ht = lop = "";
            gpa = 0;
        }
        friend ostream& operator << (ostream& , sinhvien);
        friend istream& operator >> (istream& , sinhvien& );
};

ostream& operator << (ostream & out , sinhvien a){
    out << a.msv << " " << a.ht << " " << a.lop << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

istream& operator >> (istream & in , sinhvien &a){
    in.ignore();
    getline(in,a.ht);
    in >> a.msv;
    in >> a.lop >> a.gpa;
    return in;
}

int main (){
    int n; cin >> n;
    sinhvien a[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < n ; i++){
        cout << a[i] << endl;
    }
}
