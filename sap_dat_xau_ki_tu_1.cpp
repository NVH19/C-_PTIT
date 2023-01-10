#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int l = s.size();
        map<char,int> mp;
        for(int i=0; i<l; i++)
            mp[s[i]]++;
        int max = 0;
        for(auto x : mp){
            if(x.second > max)
                max = x.second;
        }
        if(max <= (l-max+1))
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
}