#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
class PhanSo{
    private:
        long long ts,ms;
    public:
        PhanSo(long long ts,long long ms);
        friend istream& operator >> (istream &in, PhanSo &x);
        friend ostream& operator << (ostream &out, PhanSo x);
        void rutgon();

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
void PhanSo::rutgon(){
    long long c = gcd(ts,ms);
    ts = ts/c;
    ms = ms/c;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}