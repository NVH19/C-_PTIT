#include<bits/stdc++.h>
using namespace std;

string reset(string s){
    if(s[2]!='/'){
        s.insert(s.begin()+0,'0');
    }
    if(s[5]!='/'){
        s.insert(s.begin()+3,'0');
    }
    return s;
}

class SinhVien{
    private:
        string name,lop,ns;
        double gba;
    public:
        void nhap(){
            getline(cin,name);
            getline(cin,lop);
            getline(cin,ns);
            cin >> gba;
        }
        void xuat(){
            cout << "B21DCCN001" << " " << name << " " <<  lop << " " << reset(ns) << " " << fixed << setprecision(2) << gba;
        }
};



int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}