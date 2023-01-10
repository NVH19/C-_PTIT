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
        friend bool operator < (SinhVien a, SinhVien b){
            return a.gba > b.gba;
        }
};
istream& operator >> (istream &in, SinhVien &x){
    in.ignore();
    dem++;
    x.id = "B20DCCN" + string(3-to_string(dem).size(),'0') + to_string(dem);
    getline(cin,x.name);
    getline(cin,x.lop);
    getline(cin,x.ns);
    in >> x.gba;
    if(x.ns[2] != '/') x.ns = "0" + x.ns;
    if(x.ns[5] != '/') x.ns.insert(3,"0");
    return in;
}   
string reset(string s){
    for(int i=0; i<s.size();i++){
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
    return s;
}
string chuanhoa(string s){
    string tmp,tmp1;
    stringstream ss(s);
    while(ss >> tmp){
        tmp1 += reset(tmp);
        tmp1 += " ";
    }
    return tmp1;
}
ostream& operator << (ostream &out, SinhVien x){
    out << x.id << " " << chuanhoa(x.name) << x.lop << " " << x.ns << " " << fixed << setprecision(2) << x.gba << endl; 
    return out;
}

void sapxep(SinhVien a[], int n){
    sort(a,a+n);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}