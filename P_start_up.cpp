#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    int id,ls,ltt;
    long long diem;
};
void nhap(SinhVien &a){
    cin >> a.id >> a.ls >> a.ltt;
    a.diem = a.ls*7 + a.ltt*3;
}
int cmp(SinhVien a, SinhVien b){
    return a.diem < b.diem;
}
void in(SinhVien a){
    cout << a.id << " ";
}
int main(){
    int t;
    cin >> t;
    SinhVien a[t];
    for(int i=0; i<t; i++)  nhap(a[i]);
    sort(a,a+t,cmp);
    for(int i=t-1; i>=t-7; i--){
        in(a[i]);
    }
}
// 10
// 1 10 2
// 2 5 7
// 3 20 100
// 4 10 20
// 5 100 70
// 6 1 1
// 7 0 2
// 8 2 0
// 9 10 11
// 10 12 13