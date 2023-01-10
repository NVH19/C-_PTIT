#include<bits/stdc++.h>
using namespace std;
int dem=0;
class GiangVien{
    private:
        string name,nganh,id,ng;
    public:
        friend istream& operator >> (istream &in, GiangVien &x);
        friend ostream& operator << (ostream &out, GiangVien x);
        string getnganh(){
            return this->nganh;
        }
        string getng(){
            string tmp="",tmp1;
            stringstream ss(this->getnganh());
            while(ss >> tmp1){
                tmp+=toupper(tmp1[0]);
            }
            return tmp;
        }
        string getname(){
            string s = this->name;
            for(int i=0; i<s.size(); i++){
                s[i] = tolower(s[i]);
            }
            return s;
        }
};
istream& operator >> (istream &in, GiangVien &x){
    dem++;
    x.id = "GV" + string(2-to_string(dem).size(),'0') + to_string(dem);
    getline(cin,x.name);
    getline(cin,x.nganh);
    return in;
}
ostream& operator << (ostream &out, GiangVien x){
    out << x.id << " " << x.name << " " << x.getng() << endl;
    return out;
}
int check(GiangVien a, string b){
    for(int i=0; i<b.size(); i++){
        b[i] = tolower(b[i]);
    }
    if(a.getname().find(b)!=-1)
        return 1;
    return 0;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        for(int i=0; i<n; i++){
            if(check(a[i],s)){
                cout << a[i];
            }
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
// aN