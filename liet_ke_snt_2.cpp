#include<bits/stdc++.h>
using namespace std;
int a[10000] = {0};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(n>m)
            swap(m,n);
        for(int i=2; i<=m; i++){
            a[i]=1;
        }
        for(int i=1; i<=sqrt(m) ; i++){
            if(a[i]){
                for(int j=2*i; j<=m; j+=i){
                    a[j] = 0;
                }
            }
        }
        for(int i=n; i<=m; i++){
            if(a[i])
                cout << i << " ";
        }
        cout << endl;
    }
}