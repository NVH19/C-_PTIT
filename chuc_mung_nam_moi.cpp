#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    map<string,int> mp;
    for(int i=0; i<t; i++){
        string s;
        getline(cin,s);
        mp[s]++;
    }
    int cnt=0;
    for(auto it : mp){
        if(it.second > 0)
            cnt++;
    }
    cout << cnt ;
}