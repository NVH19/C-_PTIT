#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> mp;
        int a[n+2];
        for(int i=0 ;i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++){
            while(a[i]!=0){
                int r = a[i]%10;
                mp[r]++;
                a[i] /= 10;
            }
        }
        for(auto it : mp){
            cout << it.first << " ";
        }
        cout << endl;
        mp.clear();
    }
}