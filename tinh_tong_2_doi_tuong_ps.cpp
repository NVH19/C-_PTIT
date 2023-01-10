#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
long long bcnn(long long a,long long b){
    return (a/gcd(a,b)) * b;
}
class PhanSo{
    private:
        long long ts,ms;
    public:
        PhanSo(long long ts,long long ms);
        friend istream& operator >> (istream &in, PhanSo &x);
        friend ostream& operator << (ostream &out, PhanSo x);
        friend PhanSo operator + (PhanSo , PhanSo);
};
PhanSo::PhanSo(long long ts,long long ms){
    ts = ts;
    ms = ms;
}
istream& operator >> (istream &in, PhanSo &x){
    in >> x.ts >> x.ms;
    return in;
}
ostream& operator << (ostream &out, PhanSo x){
    cout << x.ts << "/" << x.ms;
    return out;
}
PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo tong(1,1);
    tong.ms = bcnn(a.ms,b.ms);
    tong.ts = a.ts * (tong.ms / a.ms) + b.ts * (tong.ms / b.ms);
    long long c = gcd(tong.ms,tong.ts);
    tong.ts /= c;
    tong.ms /= c;
    return tong;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}