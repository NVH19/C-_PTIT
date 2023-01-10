#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv, name, lop;
    double t,l,h;
    int id;
};
void nhap(SinhVien a[], int n){
    for(int i=0; i<n; i++){
        getline(cin,a[i].msv);
        getline(cin,a[i].name);
        cin >> a[i].lop;
        cin >> a[i].t >> a[i].l >> a[i].h;
        cin.ignore();
    }
}
int cmp(SinhVien a, SinhVien b){
    return a.name < b.name;
}
void in(SinhVien a[], int n){
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        a[i].id = i+1;
        cout << a[i].id << " " << a[i].msv << " " << a[i].name << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].t << fixed << setprecision(1) << " " << a[i].l << fixed << setprecision(1) << " " << a[i].h;
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];
    nhap(a,n);
    in(a,n);
}