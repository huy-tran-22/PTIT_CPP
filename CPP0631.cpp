#include <bits/stdc++.h>
using namespace std;

int kh = 1, mh = 1 , hd = 1;
class KhachHang;
class MatHang;
class HoaDon;
map<string,KhachHang> KH;
map<string,MatHang> MH;
int ok = 0;
class KhachHang {
    private :
        string mkh, tenkh,dc,gt,ns;
    public:
        friend class HoaDon;
        friend istream &operator >> (istream& in, KhachHang& a){
            string s = to_string(kh);
            while (s.length() < 3) {
                s = "0" + s;
            }
            a.mkh = "KH" + s;
            kh++;
            if (!ok){
                in.ignore();
                ok = 1;
            }
            getline (in,a.tenkh);
            getline (in,a.gt);
            getline(in,a.ns);
            getline (in,a.dc);
            KH[a.mkh] = a;
            return in;
        }
        string gettenkh(){
            return tenkh;
        }
        string getdc(){
            return dc;
        }

};

class MatHang{
    private :
        string mmh, tenmh,dv;
        int gm,gb;
    public:
        friend class HoaDon;
        friend istream &operator >> (istream &in , MatHang &a){
            string s = to_string(mh);
            while ( s.length() < 3){
                s = "0" + s;
            }
            a.mmh = "MH" + s;
            mh++;
            in.ignore();
            getline (in,a.tenmh);
            getline(in,a.dv);
            in  >> a.gm >> a.gb;
            MH[a.mmh] = a;
            return in;
        }
        int getgm(){
            return gm;
        }
        int getgb(){
            return gb;
        }
        string getdv(){
            return dv;
        }
        string gettenmh(){
            return tenmh;
        }


};

class HoaDon {
    private: 
        string mhd,mkh,mmh;
        int sl;
    public:
        friend istream &operator >> (istream& in , HoaDon & a){
            string s = to_string(hd);
            while ( s.length() < 3){
                s = "0" + s;
            }
            a.mhd = "HD" + s;
            hd++;
            in >> a.mkh >> a.mmh >> a.sl;
            return in;
        } 
        friend ostream &operator << (ostream &os, HoaDon &a){
        os << a.mhd << ' ' << KH[a.mkh].gettenkh() << ' ' << KH[a.mkh].getdc() << ' ' << MH[a.mmh].gettenmh() << ' ' << MH[a.mmh].getdv() << ' ' << MH[a.mmh].getgm() << ' ' << MH[a.mmh].getgb()  << ' ' << a.sl << ' ' << MH[a.mmh].getgb() * a.sl << endl;
        return os;
    }
};


int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
