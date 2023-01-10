#include<bits/stdc++.h>
using namespace std;
int dem = 0;
class NhanVien{
    private:
        string name,gt,ns,dc,mst,nk;
        int id;
    public:
        friend istream& operator >> (istream &in, NhanVien &x);
        friend ostream& operator << (ostream &out, NhanVien x);
        friend bool operator < (NhanVien a, NhanVien b){
            string s1 = a.ns , s2 = b.ns;
            int t1 = (s1[0]-'0')*10 + (s1[1]-'0') , t2 = (s2[0]-'0')*10 + (s2[1]-'0');
            int ng1 = (s1[3]-'0')*10 + (s1[4]-'0') , ng2 = (s2[3]-'0')*10 + (s2[4]-'0');
            int n1 = stoi(s1.substr(6)), n2 = stoi(s2.substr(6));
            if(n1!=n2){
                return n1<n2;
            }
            if(t1!=t2){
                return t1<t2;
            }
            return ng1<ng2;
        }
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
void sapxep(NhanVien a[],int n){
    sort(a,a+n);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
