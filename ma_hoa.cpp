#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            int dem=1;
            while(s[i]==s[i+1]){
                dem++;
                i++;
            }
            cout << s[i] << dem;
        }
        cout << endl;
    }
}