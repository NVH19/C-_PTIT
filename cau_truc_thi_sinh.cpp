#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name;
    string date;
    double toan,ly,hoa;
};
void nhap(ThiSinh &x){
    getline(cin,x.name);
    getline(cin,x.date);
    cin >> x.toan >> x.ly >> x.hoa;
}
void in(ThiSinh x){
    cout << x.name << " " << x.date << " " << fixed << setprecision(1) << (x.toan + x.ly +x.hoa); 
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}