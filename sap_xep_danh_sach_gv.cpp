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
        string getname(){
            string tmp3;
            stringstream ss(this->name);
            vector<string> v;
            while(ss >> tmp3){
                v.push_back(tmp3);
            }
            return v[v.size()-1];
        }
        // string getid(){
        //     return this->id;
        // }
        friend bool operator < (GiangVien a, GiangVien b){
            if(a.getname()==b.getname()){
                return a.id < b.id;
            }
            return a.getname() < b.getname();
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
int main(){
    int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++) cout << a[i];
}
// 3
// Nguyen Manh Son
// Cong nghe phan mem
// Vu Hoai Nam
// Khoa hoc may tinh
// Dang Minh Tuan
// An toan thong tin