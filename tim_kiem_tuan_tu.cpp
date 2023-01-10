#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+2];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        int ok=0;
        for(int i=1; i<=n; i++){
            if(a[i]==k){
                ok=1;
                cout << i << endl;
                break;
            }
        }
        if(ok==0)
            cout << -1 << endl;
    }
}