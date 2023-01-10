#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a,long long b){
    return (a / __gcd(a,b)) * (long long)b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,c,n;
        cin >> a >> b >> c >> n;
        long long m = pow(10,n-1);
        long long d = lcm(lcm(a,b),c);
        long long res = (m+d-1)/d*d;
        if(res < m*10)
            cout << res;
        else
            cout << -1;
        cout << endl;
    }
}