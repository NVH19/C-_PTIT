#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        map<int,int> mp;
        for(int i=0; i<n-1; i++){
            int x;
            cin >> x;
            mp[x] = 1;
        }
        for(int i=1; i<1000002; i++){
            if(mp[i] !=1 ){
                cout << i << endl;
                break;
            }
        }
    }
}