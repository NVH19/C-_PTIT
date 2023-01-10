#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long a,b;
};
void nhap(PhanSo &x){
    cin >> x.a >> x.b;
}
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void rutgon(PhanSo &x){
    long long m = gcd(x.a,x.b);
    x.a = x.a/m;
    x.b = x.b/m;
}
void in(PhanSo x){
    cout << x.a << "/" << x.b;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}