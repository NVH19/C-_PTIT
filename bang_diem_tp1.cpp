#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv,name,lop;
    float t,l,h;
    int id;
};
void nhap(SinhVien &x){
    cin.ignore();
    cin >> x.msv;
    cin.ignore();
    getline(cin,x.name);
    cin >> x.lop;
    cin >> x.t >> x.l >> x.h;
}
int cmp(SinhVien a, SinhVien b){
    return a.msv < b.msv;
}
void sap_xep(SinhVien a[], int n){
    sort(a,a+n,cmp);
}
void in_ds(SinhVien a[],int n){
    for(int i=0; i<n; i++){
        a[i].id = i+1;
        cout << a[i].id << " " << a[i].msv << " " << a[i].name << " " << fixed << setprecision(1) << a[i].lop << " " << a[i].t << fixed << setprecision(1) << " " << a[i].l << fixed << setprecision(1) << " " << a[i].h;
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
