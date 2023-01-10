#include<bits/stdc++.h>
using namespace std;
int check1(string s){
    int dem=0;
    if(s.size() > 64)
        return 0;
    for(int i=0; i<s.size(); i++){
        if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_')
            return 0;
    }
    return 1;
}
int check2(string s){
    if(s.size() > 254)
        return 0;
    int cnt=0,dem=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='.' && i!=s.size()-1 && i!=0)
            cnt++;
        if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_')
            return 0;
    }
    if(cnt==0)
        return 0;
    return 1;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s,tmp1,tmp2;
        getline(cin,s);
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='@')
                cnt++;
        }
        if(cnt!=1){
            cout << "NO";
        }
        else{
            int idx = s.find('@');
            tmp1 = s.substr(0,idx);
            tmp2 = s.substr(idx+1);
            // cout << tmp1 << " " << tmp2;
            if(check1(tmp1)==1 && check2(tmp2)==1)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }
}