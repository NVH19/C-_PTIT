#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n+2];
        for(int i=0; i<n; i++)
            cin >> a[i];
        long long s = 0;
        long long lt = 1;
        for(int i=n-1; i>=0; i--){
            s += a[i] * lt;
            s %= MOD;
            lt *= x;
            lt %= MOD;
        }
        cout << s << endl;
    }
}