#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n+1];
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int ok=0;
        for(int i=0; i<n; i++){
            if(mp[a[i]+x])
                ok=1;
        }
        if(ok)
            cout << 1;
        else
            cout << -1;
        cout << endl;
    }
}