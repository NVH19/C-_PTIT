#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,m,n;
        cin >> a >> m;
        int ok=1;
        for(int i=0; i<=m-1; i++){
            if(a*i % m ==1){
                cout << i << endl;
                ok=0;
                break;
            }
        }
        if(ok)
            cout << -1 << endl;
    }
}