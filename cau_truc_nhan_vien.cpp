#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string name,gt;
    string date ;
    string address;
    string maso, ngay;
};
void nhap(NhanVien &x){
    getline(cin,x.name);
    getline(cin,x.gt);
    getline(cin,x.date);
    getline(cin,x.address);
    getline(cin,x.maso);
    getline(cin,x.ngay);
}
void in(NhanVien x){
    cout << "00001 " << x.name << " " << x.gt <<  " "  << x.date << " " << x.address << " " << x.maso << " " << x.ngay;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}