#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name,lop,ns;
    double gba;
};
void nhap(SinhVien a[], int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin,a[i].name);
        getline(cin,a[i].lop);
        getline(cin,a[i].ns);
        cin >> a[i].gba;
        cin.ignore();
    }
}
string reset(string s){
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    s[0]= toupper(s[0]);
    return s;
}
string chuanhoa1(string s){
    string tmp,tmp1;
    stringstream ss(s);
    vector<string> v;
    while(ss >> tmp){
        tmp1 += reset(tmp);
        tmp1 += " ";
    }
    return tmp1;
}
string chuanhoa2(string s){
    if(s[2]!='/'){
        s.insert(s.begin()+0, '0');
    }
    if(s[5]!='/'){
        s.insert(s.begin()+3,'0');
    }
    return s;
}
void in(SinhVien a[], int n){
    int dem=0;
    for(int i=0; i<n; i++){
        dem++;
        string id = "B20DCCN" + string(3 - to_string(dem).size(), '0') + to_string(dem);
        cout << id << " " << chuanhoa1(a[i].name) << a[i].lop << " " << chuanhoa2(a[i].ns) << " " << fixed << setprecision(2) << a[i].gba;
        cout << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
