#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int k;
        cin >> s >> k;
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            set<char> st;
            for(int j=i; j<s.size(); j++){
                st.insert(s[j]);
                if(st.size()==k){
                    cnt++;
                }
                if(st.size()>k){
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
}