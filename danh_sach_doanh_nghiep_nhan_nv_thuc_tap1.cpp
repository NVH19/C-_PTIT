#include<bits/stdc++.h>
using namespace std;
class DoanhNghiep{
    private:
        string ma,name;
        int sl;
    public:
        friend istream& operator >> (istream &in, DoanhNghiep &x);
        friend ostream& operator << (ostream &out, DoanhNghiep x);
        friend bool operator < (DoanhNghiep a, DoanhNghiep b){
            if(a.sl!=b.sl)  return a.sl > b.sl;
            else{
                return a.ma < b.ma;
            }
        }
};
istream& operator >> (istream &in, DoanhNghiep &x){
    in >> x.ma;
    in.ignore();
    getline(cin,x.name);
    in >> x.sl;
    return in;
}
ostream& operator << (ostream &out, DoanhNghiep x){
    out << x.ma << " " << x.name << " " << x.sl <<endl;
    return out;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    DoanhNghiep a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++) cout << a[i];
}
// 4
// VIETTEL
// TAP DOAN VIEN THONG QUAN DOI VIETTEL
// 40
// FSOFT
// CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
// 300
// VNPT
// TAP DOAN BUU CHINH VIEN THONG VIET NAM
// 200
// SUN
// SUN*
// 50