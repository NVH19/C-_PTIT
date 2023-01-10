#include<bits/stdc++.h>
using namespace std;
long long ok(string s, long long b){
    long long res = 0;
    for(int i=0; i<s.size(); i++){
        res = (res * 10) + (s[i]-'0');
        res %= b;
    }
    return res;
}
long long result(long long a, long long b, long long M){
    long long res= 1;
    while(b){
        if(b%2==1){
            res *= a;
            res %= M;
        }
        a *= a;
        a %= M;
        b /= 2;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        long long b,M;
        cin >> a >> b >> M;
        long long d = ok(a,M);
        cout << result(d,b,M);
        cout << endl;
    }
}