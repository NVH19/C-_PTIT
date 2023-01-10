#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int res=0;
        for(int i=0; i<n; i++){
            if(mp[k-a[i]]>0){
                if(a[i] == k-a[i])
                    res += mp[k-a[i]] -1;
                else
                    res += mp[k-a[i]];
            }
        }
        cout << res/2 << endl;
    }
}