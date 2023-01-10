#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long tu,mau;
};
long long lcm(long long a, long long b){
    return (a/__gcd(a,b))*b;
}
void rutgon(PhanSo &a){
    long long tmp = __gcd(a.tu,a.mau);
    a.tu /= tmp;
    a.mau /= tmp;
}
void process(PhanSo a, PhanSo b){
    PhanSo c,d;
    long long e = lcm(a.mau,b.mau);
    c.tu = a.tu*(e/a.mau) + b.tu*(e/b.mau);
    c.mau = e;
    rutgon(c);
    cout << c.tu*c.tu << "/" << c.mau*c.mau << " ";
    d.tu = a.tu * b.tu * c.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau * c.mau;
    rutgon(d);
    cout << d.tu << "/" << d.mau;
    cout << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}