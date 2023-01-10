#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
    if(s[2]!='/'){
        s.insert(s.begin()+0, '0');
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
        friend istream& operator >> (istream &in, SinhVien& x);
        friend ostream& operator << (ostream &out, SinhVien x);
};
istream& operator >> (istream &in, SinhVien& x){
    getline(in,x.name);
    getline(in,x.lop);
    getline(in,x.ns);
    in >> x.gba;
    return in;
}
ostream& operator << (ostream &out, SinhVien x){
    cout << "B20DCCN001" << " " << x.name << " " << x.lop << " " << chuanhoa(x.ns) << " " << fixed << setprecision(2) << x.gba;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}