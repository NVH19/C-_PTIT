#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        while(s.size() > 1){
            int a=0;
            for(int i=0; i<s.size(); i++)
                a += (s[i] - '0');
            s = to_string(a); 
        }
        if(s[0] == '9')
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
}