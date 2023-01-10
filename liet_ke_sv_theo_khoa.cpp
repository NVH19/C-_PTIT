#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv, name, lop, em;
    public:
        friend istream& operator >> (istream &in, SinhVien &x);
        friend ostream& operator << (ostream &out, SinhVien x);
        int getnam(){
            int year = stoi(this->lop.substr(1,2));
            return year;
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
int check(SinhVien a, int b){
    return a.getnam()==b;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];
    for(int i=0; i<n; i++)  cin >> a[i];
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string nam;
        cin >> nam;
        cout << "DANH SACH SINH VIEN KHOA " << nam << ":" << endl;
        int tmp = stoi(nam.substr(2,2));
        for(int i=0; i<n; i++){
            if(check(a[i],tmp))
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
// 2015