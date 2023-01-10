#include<bits/stdc++.h>
using namespace std;
string chuanhoa1(string s){
    if(s[2]!='/'){
        s.insert(s.begin()+0,'0');
    }
    if(s[5]!='/'){
        s.insert(s.begin()+3,'0');
    }
    return s;
}
string test(string s){
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
    return s;
}
string chuanhoa2(string s){
    string tmp,s1="";
    stringstream ss(s);
    while(ss >> tmp){
        s1 += test(tmp);
        s1 += " ";
    }
    return s1;
}
class SinhVien{
    private:
        string name,lop,ns;
        double gba;
    public:
        friend istream& operator >> (istream &in, SinhVien &x);
        friend ostream& operator << (ostream &out, SinhVien x);
};
istream& operator >> (istream &in, SinhVien &x){
    getline(in,x.name);
    getline(in,x.lop);
    getline(in,x.ns);
    in >> x.gba;
    return in;
}
ostream& operator << (ostream &out, SinhVien x){
    cout << "B20DCCN001" << " " << chuanhoa2(x.name) << x.lop << " " << chuanhoa1(x.ns) << " " << fixed << setprecision(2) << x.gba;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}