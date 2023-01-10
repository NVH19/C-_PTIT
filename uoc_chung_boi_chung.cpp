#include<bits/stdc++.h>
using namespace std;
int uoc(int n, int m){
    while(m!=n){
        m = abs(m-n);
        n = abs(m-n);
    }
    return m;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        long long a = (long long)m*(n/uoc(m,n));
        cout << a << " " << uoc(m,n) << endl;
    }
}