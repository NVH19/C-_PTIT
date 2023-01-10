#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int res = 0;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i]))
                res += s[i]-'0';
        }
        vector<int> v;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])==0){
                v.push_back((int)s[i]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
            cout << (char)v[i];
        }
        cout << res;
        cout << endl;
    }
}