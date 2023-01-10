#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        map<int,vector<int>> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                mp[i+j].push_back(a[i][j]);
            }
        }
        for(int i=0; i<=n+m; i++){
            if(i%2==0){
                for(int j=mp[i].size()-1; j>=0; j--)
                    cout << mp[i][j] << " ";
            }
            else{
                for(int j=0; j<mp[i].size(); j++)
                    cout << mp[i][j] << " ";
            }
        }
        cout << endl;
    }
}