#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<int,int> mp;
        int ok=1;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i]))
                mp[s[i]-'0']++;
            else
                ok = 0;
        }
        int cnt=0;
        if(ok==0)
            cout << "INVALID";
        else{
            for(int i=0; i<=9; i++){
                if(mp[i])
                    cnt++;
            }
            if(cnt==10)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }
}