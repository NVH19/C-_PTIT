#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long tuso,mauso;
};
void nhap(PhanSo &x){
    cin >> x.tuso >> x.mauso;
}
long long gcd(long long m,long long n){
    long long a=m,b=n;
    while(a != b){
        a = abs(a-b);
        b = abs(a-b);
    }
    return a;
}
long long lcm(long long a, long long b){
    return a/gcd(a,b) * (long long)b;
}
void rutgon(PhanSo &x){
    long long m = gcd(x.tuso,x.mauso);
    x.tuso = x.tuso/m;
    x.mauso = x.mauso/m;
}
PhanSo tong(PhanSo A, PhanSo B){
    PhanSo t ;
    rutgon(A);
    rutgon(B);
    long long c = lcm(A.mauso,B.mauso);
    t.tuso = (c/A.mauso * A.tuso) + (c/B.mauso * B.tuso);
    t.mauso = c;
    rutgon(t);
    return t;
}
void in(PhanSo x){
    cout << x.tuso << "/" << x.mauso;
}
int main(){
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}