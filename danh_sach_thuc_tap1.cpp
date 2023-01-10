#include<bits/stdc++.h>
using namespace std;
int dem=0;
struct SinhVien{
    string msv, name, lop, em,dn;
    int id;
};
void nhap(SinhVien a[],int n){
    for(int i=0; i<n; i++){
        dem++;
        a[i].id = dem;
        getline(cin,a[i].msv);
        getline(cin,a[i].name);
        getline(cin, a[i].lop);
        getline(cin,a[i].em);
        getline(cin,a[i].dn);
    }
}

void in(SinhVien x){
    cout << x.id << " " << x.msv << " " << x.name << " " << x.lop << " " << x.em << " " << x.dn;
    cout << endl;
}
int cmp(SinhVien a, SinhVien b){
    return a.name < b.name;
}
int main(){
    int n,q;
    cin >> n;
    SinhVien a[n];
    cin.ignore();
    nhap(a,n);
    sort(a,a+n,cmp);
    cin >> q;
    cin.ignore();
    while(q--){
        string tmp;
        cin >> tmp;
        for(int i=0; i<n; i++){
            if(a[i].dn == tmp){
                in(a[i]);
            }
        }
    }
}
