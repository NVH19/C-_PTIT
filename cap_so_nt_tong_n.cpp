#include<bits/stdc++.h>
using namespace std;
int check[999999];
int main(){
    int t;
    cin >> t ;
    for(int i=2; i<=999999; i++)
        check[i] = 1;
    for(int i=2; i<=sqrt(999999); i++){
        if(check[i]){
            for(int j=2*i; j<=999999; j+=i){
                check[j] = 0;
            }
        }
    }
    while(t--){
        int n;
        cin >> n;
        int ok=1;
        for(int i=2; i<=n; i++){
            if(check[i] && check[n-i]){
                cout << i << " " << n-i << endl;
                ok = 0;
                break;
            }
        }
        if(ok)
            cout << -1 << endl;
    }
}