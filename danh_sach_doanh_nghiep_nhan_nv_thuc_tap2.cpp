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
        int getsl(){
            return this->sl;
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
int check(DoanhNghiep a,int l, int r){
    if(a.getsl() >= l && a.getsl() <= r)
        return 1;
    return 0;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    DoanhNghiep a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:" << endl;
        for(int i=0; i<n; i++){
            if(check(a[i],l,r))
                cout << a[i];
        }
    }
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
// 1
// 30 50