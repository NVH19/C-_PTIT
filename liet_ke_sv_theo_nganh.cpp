#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv, name, lop, em;
    public:
        friend istream& operator >> (istream &in, SinhVien &x);
        friend ostream& operator << (ostream &out, SinhVien x);
        string getmsv(){
            return this->msv;
        }
        char getlop(){
            return this->lop[0];
        }
};
istream& operator >> (istream &in, SinhVien &x){
    in >> x.msv;
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
int check(SinhVien a, string b){
    string ng = a.getmsv().substr(5,2);
    if(ng == "CN" || ng=="AT"){
        if(ng==b && a.getlop() != 'E')
            return 1;
    }
    else{
        if(ng==b)
            return 1;
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin,s);
        for(int i=0; i<s.size(); i++)
            s[i] = toupper(s[i]);
        string tmp="";
        string tmp1,tmp2;
        stringstream ss(s);
        while(ss >> tmp1){
            tmp+=tmp1[0];
        }
        tmp2 = tmp.substr(0,2);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        // cout << tmp << endl;
        for(int i=0; i<n; i++){
            if(check(a[i],tmp2))
                cout << a[i];
        }
    }
}
// 4
// B16DCCN011
// Nguyen Trong Duc Anh
// D16CNPM1
// sv1@stu.ptit.edu.vn
// B15DCCN215
// To Ngoc Hieu
// D15CNPM3
// sv2@stu.ptit.edu.vn
// B15DCKT150
// Nguyen Ngoc Son
// D15CQKT02-B
// sv3@stu.ptit.edu.vn
// B15DCKT199
// Nguyen Trong Tung
// D15CQKT02-B
// sv4@stu.ptit.edu.vn
// 1
// Ke toan