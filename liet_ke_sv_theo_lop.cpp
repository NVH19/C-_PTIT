#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv,name,lop,em;
    public:
        friend istream& operator >> (istream &in, SinhVien &x);
        friend ostream& operator << (ostream &out, SinhVien x);
        string getlop(){
            return this->lop;
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
int check(string s, SinhVien x){
    if(s == x.getlop())
        return 1;
    return 0;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin,s);
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for(int i=0; i<n; i++){
            if(check(s,a[i])){
                cout << a[i];
            }
        }
    }
}
