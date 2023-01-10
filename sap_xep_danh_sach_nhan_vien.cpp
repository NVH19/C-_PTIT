#include<bits/stdc++.h>
using namespace std;
int dem=0;
struct NhanVien{
    string name,gt,ns,dc,mst,nk;
    int id;
};
string chuanhoa(string s){
    if(s[2] != '/'){
        s.insert(s.begin()+0, '0');
    }
    if(s[5] != '/'){
        s.insert(s.begin()+3, '0');
    }
    return s;
}
void nhap(NhanVien &x){
    cin.ignore();
    getline(cin,x.name);
    cin >> x.gt;
    cin >> x.ns;
    cin.ignore();
    getline(cin,x.dc);
    cin >> x.mst;
    cin >> x.nk;
    dem++;
    x.id = dem;
}
void inds(NhanVien a[], int n){
    for(int i=0; i<n; i++){
        cout << setfill('0') << setw(5) << a[i].id << " " << (a[i].name) << " " << a[i].gt << " " << chuanhoa(a[i].ns) << " " << a[i].dc << " " << a[i].mst << " " << chuanhoa(a[i].nk);
        cout << endl;
    }
}
int cmp(NhanVien a, NhanVien b){
    string s1 = a.ns;
    string s2 = b.ns;
    int t1 = (s1[0]-'0')*10 + (s1[1]-'0'), t2 = (s2[0]-'0')*10 + (s2[1]-'0');
    int ng1 = (s1[3]-'0')*10 + (s1[4]-'0'), ng2 = (s2[3]-'0')*10 + (s2[4]-'0');
    int n1 = stoi(s1.substr(6)), n2 = stoi(s2.substr(6));
    if(n1!=n2){
        return n1<n2;
    }
    if(t1!=t2){
        return t1<t2;
    }
    return ng1<ng2;
}
void sapxep(NhanVien a[],int n){
    sort(a,a+n,cmp);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}