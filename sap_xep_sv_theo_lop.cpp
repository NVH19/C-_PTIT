#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv,name,lop,em;
    public:
        friend istream& operator >> (istream &in, SinhVien &x);
        friend ostream& operator << (ostream &out, SinhVien x);
        friend bool operator < (SinhVien a, SinhVien b){
            if(a.lop == b.lop){
                return a.msv < b.msv;
            }
            return a.lop < b.lop;
        }
};
istream& operator >> (istream &in, SinhVien &x){
    cin >> x.msv;
    in.ignore();
    getline(cin,x.name);
    getline(cin,x.lop);
    getline(cin,x.em);
    return in;
}
ostream& operator << (ostream &out, SinhVien x){
    out << x.msv << " " << x.name << " " << x.lop << " " << x.em << endl;
    return out;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++) cout << a[i];
}