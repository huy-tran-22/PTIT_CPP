#include <bits/stdc++.h>
using namespace std;

int k = 1;
class sv {
    private: 
        string name,lop,msv,ns;
        float gpa;
    public:
        friend istream& operator >> (istream& , sv&);
        friend ostream& operator << (ostream& , sv);
        sv (){
            string s = to_string(k);
            while ( s.length() < 3){
                s = '0' + s;
            }
            msv = "B20DCCN" + s;
            k++;
        }
};

void chuanhoa ( string &s){
    for ( int i = 0 ; i < s.length() ; i++){
        s[i] = tolower(s[i]);
    }
    stringstream token (s);
    string k;
    vector <string> v;
    while ( token >> k){
        v.push_back(k);
    }
    for ( int i = 0 ; i < v.size() ; i++){
        v[i][0] = toupper(v[i][0]);
    }
    s = "";
    for ( int i = 0 ; i < v.size() ; i++){
        if ( i != v.size() - 1) {
            s += v[i] + " ";
        }
        else s += v[i];
    }
}
istream& operator >> (istream& in , sv& a){
    in.ignore();
    getline(in,a.name);
    in >> a.lop >> a.ns >> a.gpa;
    chuanhoa(a.name);
    return in;
}
ostream& operator << (ostream& out , sv a){
    out << a.msv << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main(){
    sv ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

// nGuyEn  vaN    biNH
// D20CQCN01-B
// 2/12/2002
// 3.1
