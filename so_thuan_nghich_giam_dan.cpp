#include<bits/stdc++.h>
using namespace std;
int test(string s){
    if(s.size() < 2)
        return 0;
    string t = s;
    reverse(s.begin(),s.end());
    return t == s;
}
bool cmp(pair<string,int> a, pair<string,int> b){
    return (a.first.size() != b.first.size() ? a.first.size() > b.first.size() : a > b);
}
int main(){
    string s;
    map<string,int> mp;
    while(cin >> s){
        if(test(s)){
            mp[s]++;
        }
    }
    vector<pair<string,int>> v;
    for(auto it : mp){
        v.push_back(it);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }
}