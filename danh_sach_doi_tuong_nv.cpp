#include<bits/stdc++.h>
using namespace std;
int dem=0;
class NhanVien{
    private:
        string name,gt,ns,dc,mst,nk;
        int id;
    public:
        friend istream& operator >> (istream &in, NhanVien &x);
        friend ostream& operator << (ostream &out, NhanVien x);
};
istream& operator >> (istream &in, NhanVien &x){
    dem++;
    x.id = dem;
    in.ignore();
    getline(cin,x.name);
    cin >> x.gt;
    cin >> x.ns;
    in.ignore();
    getline(cin,x.dc);
    cin >> x.mst >> x.nk;
    return in;
}
ostream& operator << (ostream &out, NhanVien x){
    out << setfill('0') << setw(5) << x.id << " " << x.name << " " << x.gt << " " << x.ns << " " << x.dc << " " << x.mst << " " << x.nk << endl;
    return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
