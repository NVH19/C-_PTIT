#include<bits/stdc++.h>
using namespace std;
struct tg{
    int gio,phut,giay;
};
int cmp(tg a, tg b){
    // int gio1 = (a[0]-'0')*10 + (a[1]-'0'), gio2 = (b[0]-'0')*10 + (b[1]-'0');
    // int phut1 = (a[3]-'0')*10 + (a[4]-'0'), phut2 = (b[3]-'0')*10 + (b[4]-'0');
    // int giay1 = (a[6]-'0')*10 + (a[7]-'0'), giay2 = (b[6]-'0')*10 + (b[7]-'0');
    if(a.gio!=b.gio){
        return a.gio<b.gio;
    }
    if(a.phut!=b.phut){
        return a.phut<b.phut;
    }
    return a.giay<b.giay;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    tg a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].gio >> a[i].phut >> a[i].giay;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
    }
}