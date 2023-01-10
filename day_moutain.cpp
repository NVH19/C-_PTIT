#include<bits/stdc++.h>
using namespace std;
int result(int n, int a[], int l ,int r){
    int k = (l+r)/2;
    int ok=1;
    for(int i=l; i<=k-1; i++){
        if(a[i] > a[i+1]){
            ok=0;
        }
    }
    for(int i=k; i<r; i++){
        if(a[i] < a[i+1])
            ok=0;
    }
    if(ok)
        return 1;
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++)
            cin >> a[i];
        int l,r;
        cin >> l >> r;
        if(result(n,a,l,r))
            cout << "YES";
        else    
            cout << "NO";
        cout << endl;
    }
}