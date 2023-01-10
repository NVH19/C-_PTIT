#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string ma;
    string name,gt,ns,dc,ms,nhd;
};
void nhap(NhanVien &x){
    cin.ignore();
    getline(cin,x.name);
    cin >> x.gt >> x.ns ;
    cin.ignore();
    getline(cin,x.dc);
    cin >> x.ms >> x.nhd; 
}
void inds(NhanVien a[], int N){
    for(int i=0; i<N; i++){
        string s = to_string(i+1);
        while(s.size() < 5)
            s = "0" + s;
        cout << s << " ";
        cout << a[i].name << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].ms << " " << a[i].nhd << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}