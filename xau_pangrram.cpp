#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int n;
        cin >> n;
        map<char,int> mp;
        for(int i=0; i<s.size(); i++)
            mp[s[i]]++;
        int cnt=0;
        for(auto it : mp){
            if(it.second > 0)
                cnt++;
        }
        if(n<26-cnt)
            cout << 0 << endl;
        else    
            cout << 1 << endl;
    }
}