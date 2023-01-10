#include<bits/stdc++.h>
using namespace std;
int dem=0;
struct Phim{
    string mtl,ngay,name,tap,id;
};
int cmp(Phim a, Phim b){
    string s1 = a.ngay, s2 = b.ngay;
    int ng1 = (s1[0]-'0')*10+(s1[1]-'0'), ng2 = (s2[0]-'0')*10+(s2[1]-'0');
    int t1 = (s1[3]-'0')*10+(s1[4]-'0'), t2 = (s2[3]-'0')*10+(s2[4]-'0');
    int n1 = stoi(s1.substr(6)), n2 = stoi(s2.substr(6));
    if(s1!=s2){
        if(n1!=n2) return n1<n2;
        if(t1!=t2) return t1<t2;
        return ng1<ng2;
    }
    else{
        if(a.name!=b.name) return a.name < b.name;
        else return a.tap < b.tap;
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    cin.ignore();
    string b[n];
    for(int i=0; i<n; i++){
        getline(cin,b[i]);
    }
    Phim a[m];
    for(int i=0; i<m; i++){
        dem++;
        a[i].id = "P" + string(3-to_string(dem).size(),'0') + to_string(dem);
        cin >> a[i].mtl;
        cin.ignore();
        getline(cin,a[i].ngay);
        getline(cin,a[i].name);
        cin >> a[i].tap;
    }
    sort(a,a+m,cmp);
    for(int i=0; i<m; i++){
        cout << a[i].id << " " << b[stoi(a[i].mtl.substr(4))-1] << " " << a[i].ngay << " " << a[i].name << " " << a[i].tap;
        cout << endl;
    }
}
// 2 3
// Hai huoc
// Tinh cam
// TL001
// 25/11/2021
// Phim so 1
// 10
// TL001
// 04/12/2021
// Phim so 2
// 15
// TL002
// 25/11/2021
// Phim so 3
// 5