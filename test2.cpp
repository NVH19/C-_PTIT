#include<bits/stdc++.h>
using namespace std;
struct OTO{
    string a,b,d,e;
    int c;
};
int tien(OTO s){
    int tong = 0;
    if(s.c == 5)
        tong = 10000;
    else if(s.c == 7)
        tong = 15000;
    else if(s.c == 2)
        tong = 20000;
    else if(s.c == 29)
        tong = 50000;
    else    
        tong = 70000;
    return tong;
}
int test(OTO s){
    if(s.d[0] == 'O')
        return 0;
    return 1;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    OTO m[t+1];
    for(int i=0 ;i<t; i++){
        cin >> m[i].a >> m[i].b >> m[i].c >> m[i].d >> m[i].e;
    }
    int money = 0;
    m[t].e = "2";
    for(int i=0; i<t; i++){
        if(m[i].e == m[i+1].e){
            money += tien(m[i])*test(m[i]);
        }
        else{
            cout << m[i].e << ": " << money + tien(m[i])*test(m[i]) << endl;
            money = 0;
        }
    }
}
