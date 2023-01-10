#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        int cnt=0;
        int l = a[0], r = a[n-1];
        for(int i=l; i<=r; i++){
            if(mp[i]<1)
                cnt++;
        }
        cout << cnt << endl;
    }
}