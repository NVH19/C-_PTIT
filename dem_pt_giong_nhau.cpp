#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        map<int,int> mp;
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                if(i==0)
                    mp[a[i][j]] = 1;
            }
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                if(mp[a[i][j]]==i)
                    mp[a[i][j]] = i+1;
            }
        }
        for(int i=0; i<n; i++){
            if(mp[a[0][i]] == n){
                cnt++;
                mp[a[0][i]] = 0;
            }
        }
        cout << cnt << endl;
    }
}