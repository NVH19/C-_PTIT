#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,p;
        cin >> n >> p;
        int res = 0,tmp,tmp1=p;
        while(tmp1<=n){
            tmp = n/tmp1;
            res += tmp;
            tmp1 *= p;
        }
        cout << res << endl;
    }
}