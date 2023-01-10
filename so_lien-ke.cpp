#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ok = 1;
        for(int i=0; i<s.size()-1; i++){
            int a = abs((s[i]-'0')-(s[i+1]-'0'));
            if(a!=1)
                ok=0;
        }
        if(ok)
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
    }
}