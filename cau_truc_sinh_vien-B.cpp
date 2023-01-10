#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name;
    string lop;
    string date;
    double point;
};
void nhap(SinhVien &x){
    getline(cin,x.name);
    getline(cin,x.lop);
    getline(cin,x.date);
    cin >> x.point;
    if(x.date[1] == '/'){
        x.date = "0" + x.date;
    }
    if(x.date[4] == '/'){
        x.date.insert(3,"0");
    }
}
void in(SinhVien x){
    cout << "B20DCCN001 " << x.name << " " << x.lop << " " << x.date << " " << fixed << setprecision(2) << x.point; 
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}