#include <bits/stdc++.h>
using namespace std;

int n = 1;
class SinhVien {
    private:
        string msv,ht,lop,ns;
        float gpa;
    public:
        void nhap(){
            //cin.ignore();
            getline (cin,ht);
            cin >> lop >> ns >> gpa;
            string tmp = ht;
            stringstream s (tmp);
            string token,k;
        while ( s >> token){
        token[0] = toupper(token[0]);
        for ( int i = 1 ; i < token.length() ; i++){
            token[i] = tolower(token[i]);
        }
        k += token + " ";
    }
        k.erase(k.length()-1);
        ht = k;
        }
        void xuat(){
            cout << msv << " " << ht << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa << endl;
        }
        SinhVien(){
            msv = "B21DCCN";
            string tmp = "";
            tmp += to_string(n);
            while (tmp.length() < 3) tmp = '0' + tmp;
            msv += tmp;
            n++;
        }
        string getname(){
            return this -> ht;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
