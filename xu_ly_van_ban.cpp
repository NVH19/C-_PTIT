#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
    for(int i=0; i<s.size();i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
string check(string s){
    string tmp;
    stringstream ss(s);
    string a = "";
    while(ss >>tmp){
        a += chuanhoa(tmp);
        a += " ";
    }
    a[0] = toupper(a[0]);
    return a;
}
int main(){
    string s = "";
    string tmp;
    while(getline(cin,tmp)){
        s += tmp;
        s += " ";
    }
    string s1 = "";
    for(int i=0; i<s.size(); i++){
        if(s[i]!= '.' && s[i] != '?' && s[i] != '!'){
            s1 += s[i];
        }
        else{
            cout << check(s1) << endl;
            s1 = "";
        }
    }
}