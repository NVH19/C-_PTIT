#include<bits/stdc++.h>
using namespace std;
struct MH{
    string name,nh;
    double gm,gb;
    int id;
};
void nhap(MH a[], int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        a[i].id = i+1;
        getline(cin, a[i].name);
        getline(cin, a[i].nh);
        cin >> a[i].gb >> a[i].gm;
        cin.ignore();
    }
}

int cmp(MH a, MH b){
    return a.gb-a.gm < b.gb-b.gm;
}
void in(MH a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i].id << " " << a[i].name << " " << a[i].nh << " " << fixed << setprecision(2) << a[i].gm - a[i].gb;
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    MH a[n];
    nhap(a,n);
    sort(a,a+n,cmp);
    in(a,n);
}