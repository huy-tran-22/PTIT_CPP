#include <bits/stdc++.h>
using namespace std;


int kh = 0 , mh = 0 , hd = 0;
int ok = 0;
class KhachHang;
class MatHang;
class HoaDon;
map <string,KhachHang> KH;
map <string,MatHang> MH;

class KhachHang{
    private:
        string mkh,tenkh,gt,dc,ns;
    public:
        friend class HoaDon;
        friend istream &operator >> (istream &in , KhachHang &a){
            kh++;
            string s = to_string(kh);
            while (s.length() < 3) s = "0" + s;
            a.mkh = "KH" + s;
            if (!ok){
                in.ignore();
                ok = 1;
            }
                getline(in,a.tenkh);
                getline(in,a.gt);
                getline(in,a.ns);
                getline (in,a.dc);
            KH[a.mkh] = a;
            return in;
        }
        string gettenkh (){
            return tenkh;
        }
        string getdc (){
            return dc;
        }
};

class MatHang {
    private:
        string mmh,tenmh,dv;
        int gm,gb;
    public:
        friend class HoaDon;
        friend istream &operator >> (istream& in, MatHang &a){
            mh++;
            string s = to_string(mh);
            while (s.length() < 3) s = "0" + s;
            a.mmh = "MH" + s;
            in.ignore();
            getline(in,a.tenmh);
            cin >> a.dv >> a.gm >> a.gb;
            MH[a.mmh] = a;
            return in;
        }
        string gettenmh(){
            return tenmh;
        }
        string getdv(){
            return dv;
        }
        int getgm (){
            return gm;
        }
        int getgb(){
            return gb;
        }
};

class HoaDon {
    private:
        string mhd,mkh,mmh;
        int sl,ln;
    public:
        HoaDon(){
            ln = (MH[mmh].getgb() * sl) - (MH[mmh].getgm() * sl);
        }
        friend istream &operator >> (istream &in, HoaDon &a){
            hd++;
            string s = to_string(hd);
            while (s.length() < 3) s = "0" + s;
            a.mhd = "HD" + s; 
            // a.ln = (MH[a.mmh].getgb() * a.sl) - (MH[a.mmh].getgm() * a.sl);
            cin >> a.mkh >> a.mmh >> a.sl;
            return in;
        }
        friend ostream &operator << (ostream &out , HoaDon &a){
            out << a.mhd << ' ' << KH[a.mkh].gettenkh() << ' ' << KH[a.mkh].getdc() << ' ' << MH[a.mmh].gettenmh() << ' ' << a.sl  << ' '<< MH[a.mmh].getgm() * a.sl  << ' ' << a.ln << endl; 
            return out;
        }
        int getln (){
            return ln;
        }
};

void sapxep ( HoaDon a[] , int n){
    for ( int i = 0 ; i < n-1 ; i++){
        for ( int j = i+1 ; j < n ; j++){
            if (a[i].getln() < a[j].getln()){
                HoaDon tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

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

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
