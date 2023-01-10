#include<bits/stdc++.h>
using namespace std;
int dem=0;
class GiangVien{
    private:
        string name, nganh, id;
    public:
        friend istream& operator >> (istream &in , GiangVien &x);
        friend ostream& operator << (ostream &out, GiangVien x);
        string getnganh(){
            string tmp1,tmp="";
            stringstream ss(this->nganh);
            while(ss >> tmp1){
                tmp += toupper(tmp1[0]);
            }
            return tmp;
        }
        string getnganh1(){
            return this->nganh;
        }
        
};
istream& operator >> (istream &in , GiangVien &x){
    dem++;
    x.id = "GV" + string(2-to_string(dem).size(),'0') + to_string(dem);
    getline(cin,x.name);
    getline(cin,x.nganh);
    return in;
}
ostream& operator << (ostream &out, GiangVien x){
    out << x.id << " " << x.name << " " << x.getnganh() << endl;
    return out;
}
int check(GiangVien a, string b){
    if(a.getnganh1()==b){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin,s);
        string s1,s2="";
        stringstream ss(s);
        while(ss >> s1){
            s2 += toupper(s1[0]);
        }
        cout << "DANH SACH GIANG VIEN BO MON " << s2 << ":" << endl; 
        for(int i=0; i<n; i++){
            if(check(a[i],s))
                cout << a[i];
        }
    }
}
// 3
// Nguyen Manh Son
// Cong nghe phan mem
// Vu Hoai Nam
// Khoa hoc may tinh
// Dang Minh Tuan
// An toan thong tin
// 1
// Cong nghe phan mem