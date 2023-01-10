#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans=0,tmp=0,res=0;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                tmp = s[i]-'0';
                res = res*10 + tmp;
                 if(isdigit(s[i+1])==0)
                    ans += res;
            }
            else{
                res = 0;
            }
        }
        cout << ans << endl;
    }
}