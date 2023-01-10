#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv,name,lop,em;
    public:
        friend istream& operator >> (istream &in, SinhVien &x);
        friend ostream& operator << (ostream &out, SinhVien x);
        friend bool operator < (SinhVien a, SinhVien b){
            return a.msv < b.msv;
        }
};
istream& operator >> (istream &in, SinhVien &x){
    cin >> x.msv;
    in.ignore();
    getline(cin,x.name);
    getline(cin,x.lop);
    getline(cin,x.em);
    return in;
}
ostream& operator << (ostream &out, SinhVien x){
    out << x.msv << " " << x.name << " " << x.lop << " " << x.em << endl;
    return out;
}
int main(){
    vector<SinhVien> v;
    SinhVien tmp;
    while(cin >> tmp){
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i];
    }
}