#include<bits/stdc++.h>
using namespace std;
int dem=0;
class SinhVien{
    private:
        string name,lop,ns,id;
        double gba;
    public:
        friend istream& operator >> (istream &in, SinhVien &x);
        friend ostream& operator << (ostream &out, SinhVien x);
};
istream& operator >> (istream &in, SinhVien &x){
    in.ignore();
    dem++;
    x.id = "B20DCCN" + string(3-to_string(dem).size(), '0') + to_string(dem);
    getline(cin, x.name);
    getline(cin, x.lop);
    getline(cin, x.ns);
    in >> x.gba;
    if(x.ns[2] != '/') x.ns = "0" + x.ns;
    if(x.ns[5] != '/') x.ns.insert(3,"0");
    return in;
}
ostream& operator << ( ostream &out, SinhVien x){
    out << x.id << " " << x.name << " " << x.lop << " " << x.ns << " " << fixed << setprecision(2) << x.gba << endl;
    return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}