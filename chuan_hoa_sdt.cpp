#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(s[0] == '+'){
            cout << 0;
            for(int i=3; i<s.size(); i++){
                if(0 <= s[i]-'0' && s[i]-'0' <= 9)
                    cout << s[i];
            }
        }
        else if(s[0] == '8'){
            cout << 0;
            for(int i=2; i<s.size(); i++){
                if(0 <= s[i]-'0' && s[i]-'0' <= 9)
                    cout << s[i];
            }
        }
        else{
            for(int i=0; i<s.size(); i++){
                if(0 <= s[i]-'0' && s[i]-'0' <= 9)
                    cout << s[i];
            }
        }
        cout << endl;
    }
}