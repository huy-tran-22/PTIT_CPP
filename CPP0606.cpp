#include <bits/stdc++.h>
using namespace std;

class nhanvien {
    private:
        string ma;
        string name,sex,date,add,tax,date2;
    public:
        nhanvien (){
            ma = "00001";
        }
        friend istream &operator >> (istream& , nhanvien&);
        friend ostream &operator << (ostream& , nhanvien);
        void nhap();
        void xuat();
};

// istream& operator >> ( istream & in, nhanvien &a){
//     in.ignore();
//     getline(in,a.name);
//     in >> a.sex >> a.date >> a.add >> a.tax >> a.date2;
//     return in;
// }
// ostream& operator << ( ostream & out , nhanvien a){
//     out << a.ma << " " << a.name << " " << a.date << " "<< a.add << " " << a.tax << " " << a.date2<< endl;
//     return out;
// }

void nhanvien :: nhap(){
    getline(cin,name);
    cin >> sex >> date;
    cin.ignore();
    getline(cin,add);
    cin >> tax >> date2;
    
}
void nhanvien :: xuat (){
    cout << ma << " " << name << " " << date << " "<< add << " " << tax << " " << date2;
}

int main(){
    nhanvien a;
    a.nhap();
    a.xuat();
    return 0;
}