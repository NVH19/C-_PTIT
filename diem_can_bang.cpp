#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,ok=0;
        cin >> n;
        long long s=0;
        int a[n+2];
        for(int i=0; i<n; i++){
            cin >> a[i];
            s += a[i];
        }
        long long res = 0;
        for(int i=0; i<n; i++){
            res += a[i];
            if(2*res-a[i] == s){
                cout << i+1;
                ok = 1;
                break;
            }
        }
        if(ok==0)
            cout << -1;
        cout << endl;
    }
}