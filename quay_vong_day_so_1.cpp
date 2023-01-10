#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        int m = k % n;
        for(int i=m; i<n; i++)
            cout << a[i] << " ";
        for(int i=0; i<m; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}