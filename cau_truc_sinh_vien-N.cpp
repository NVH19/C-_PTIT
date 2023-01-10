#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name,lop,ns;
    double gba;
};
void nhapThongTinSV(SinhVien &x){
    getline(cin,x.name);
    cin >> x.lop >> x.ns;
    cin >> x.gba;
}
void inThongTinSV(SinhVien x){
    if(x.ns[1] == '/')
        x.ns = "0" + x.ns;
    if(x.ns[4] == '/')
        x.ns.insert(3,"0");
    cout << "N20DCCN001 " << x.name << " " << x.lop << " " << x.ns << " " << fixed << setprecision(2) << x.gba;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}