#include<bits/stdc++.h>
using namespace std;
struct GV{
    string id,name;
    int luong;
};
int test(string s){
    int sum = (s[2]-'0')*10 + s[3]-'0';
    return sum;
}
int main(){
    GV x;
    cin >> x.id ;
    cin.ignore();
    getline(cin,x.name);
    cin >> x.luong;
    int a = test(x.id), tmp;
    if(x.id[1] == 'T')
        tmp = 2000000;
    else if(x.id[1] == 'P')
        tmp = 900000;
    else
        tmp = 500000;
    long long tong = x.luong * a + tmp;
    cout << x.id << " " << x.name << " " << a << " " << tmp << " " << tong ;
}