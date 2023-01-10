#include<bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string name,gt,ns,dc,sdt,ngay;
    public:
        void nhap();
        void xuat();
};
void NhanVien::nhap(){
    getline(cin,name);
    getline(cin,gt);
    getline(cin,ns);
    getline(cin,dc);
    getline(cin,sdt);
    getline(cin,ngay);
}
void NhanVien::xuat(){
    cout << "00001" << " " << name << " " << gt << " " << ns << " " << dc << " " << sdt << " " << ngay;
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}