#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    return n*(n-1) / 2;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0 ;i<s.size(); i++){
            mp[s[i]]++;
        }
        int res=0;
        for(auto it : mp){
            if(it.second > 1){
                res += sum(it.second);
            }
        }
        cout << res + s.size() << endl;
    }
}