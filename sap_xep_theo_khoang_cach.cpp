#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        multimap<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp.insert({abs(x-a[i]),a[i]});
        }
        // sort(a,a+n);
        // for(int i=1; i<=a[n-1]; i++){
        //     if(mp[i]!=0){
        //         cout << mp[i] << " ";
        //     }
        // }
        for(auto it : mp){
            cout << it.second << " ";
        }
        cout << endl;
    }
}