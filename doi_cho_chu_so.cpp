#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int ok=1;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]<s[i-1]){
                ok=0;
                int max = s[i],tmp=i;
                for(int k=i; k<s.size(); k++){
                    if(s[k] > max && s[k] < s[i-1]){
                        tmp = k;
                        max = s[k];
                    }
                }
                swap(s[i-1],s[tmp]);
                break;
            }
        }
        if(ok)
            cout << -1;
        else if(s[0]=='0'){
            for(int i=1; i<s.size(); i++)
                cout << s[i];
        }
        else
            cout << s;
        cout << endl;
    }
}