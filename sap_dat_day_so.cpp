#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        map<long long,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i=0; i<n; i++){
            if(a[i] != i){
                if(mp[i]>0)
                    cout << i << " ";
                else
                    cout << -1 << " ";
            }
            else    
                cout << a[i] << " ";
        }
        cout << endl;
        mp.clear();
    }
}