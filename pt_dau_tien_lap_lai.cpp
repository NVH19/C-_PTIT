#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ok=1;
        for(int i=0; i<n; i++){
            mp[a[i]]++;
            if(mp[a[i]] > 1){
                cout << a[i];
                ok=0;
                break;
            }
        }
        if(ok)
            cout << -1;
        cout << endl;
    }
}