#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v;
    map<int,int> mp;
    while(cin >> n){
        v.push_back(n);
        mp[n]++;
        // if(n==1){
        //     break;
        // }
    }
    for(auto x : v){
        if(mp[x]>0){
            cout << x << " " << mp[x] << endl;
            mp[x]=0;
        }
    }
}