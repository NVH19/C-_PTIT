#include<bits/stdc++.h>
using namespace std;
int test(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] % 2!=0 || s[i] != s[s.size()-i-1])
            return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(test(s))
            cout << "YES" <<endl;
        else    
            cout << "NO" << endl;
    }
}