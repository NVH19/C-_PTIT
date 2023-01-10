#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int idx,cnt=0;
        while(s.find("100")!=-1){
            idx = s.find("100");
            s.erase(s.begin()+idx, s.begin()+idx+3);
            cnt+=3;
        }
        if(cnt!=0)
            cout << cnt << endl;
    }
}