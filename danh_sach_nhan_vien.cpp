#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string name,gt,date,add,id,hopdong;
};
void nhap(NhanVien &x){
    cin.ignore();
    getline(cin,x.name);
    cin >> x.gt >> x.date;
    cin.ignore();
    getline(cin,x.add);
    cin >> x.id >> x.hopdong;
}
void inds(NhanVien ds[],int n){
    for(int i=0; i<n; i++){
        cout << fixed << setfill('0') <<setw(5) << i+1 << " ";
        cout << ds[i].name << " " << ds[i].gt << " " << ds[i].date << " " << ds[i].add << " " << ds[i].id << " " << ds[i].hopdong;
        cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}