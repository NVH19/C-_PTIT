#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int res=0,tmp=0,ans = INT_MIN;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                tmp = s[i]-'0';
                res = res * 10 + tmp;
                if(isdigit(s[i+1])==0)
                    ans = max(ans,res);
            }
            else{
                res = 0;
            }
        }
        cout << ans << endl;
    }
}