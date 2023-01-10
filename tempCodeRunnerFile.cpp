#include<bits/stdc++.h>
using namespace std;
int check1(string s){
    if(s.size() > 64)
        return 0;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])==0 && (s[i]<'a' || s[i]>'z') && (s[i]<'A'|| s[i]>'Z') && s[i]!='.' && s[i]!='_')
            return 0;
    }
    return 1;
}
int check2(string s){
    if(s.size() > 254)
        return 0;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='.')
            cnt++;
        if((s[i]<'0' || s[i]>'9') && (s[i]<'a' || s[i]>'z') && (s[i]<'A'|| s[i]>'Z') && s[i]!='.' && s[i]!='_')
            return 0;
    }
    if(cnt==0 || s[0]=='.' || s[s.size()-1] =='.')
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