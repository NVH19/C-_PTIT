#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for(int i =0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int s = 0;
        for(auto it : mp){
            if(it.second > 1)
                s += it.second;
        }
        cout << s << endl;
    }
}