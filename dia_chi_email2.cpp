#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
    for(int i=0; i<s.size() ;i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    map<string,int> mp;
    while(t--){
        string s;
        getline(cin,s);
        string tmp,res ="";
        stringstream ss(s);
        vector<string> v;
        while(ss >> tmp){
            v.push_back(chuanhoa(tmp));
        }
        res += v[v.size()-1];
        for(int i=0; i<v.size()-1; i++){
            res += v[i][0];
        }
        if(mp[res]==0){
            cout << res << "@ptit.edu.vn";
        }
        else{
            cout << res << mp[res]+1 << "@ptit.edu.vn";
        }
        mp[res]++;
        cout << endl;
    }
}