#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        long long m;
        cin >> m;
        long long res = 0;
        for(int i=0; i<s.size(); i++){
            res = (res*10 + s[i]-'0')%m;
        }
        cout << res << endl;
    }
}