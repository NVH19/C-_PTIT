#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    }
    stringstream ss(s);
    char c;
    for(int i=0; i<s.size(); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u' && s[i] != 'y')
            cout << "." << s[i] ; 
    }
}