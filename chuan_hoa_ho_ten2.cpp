#include<bits/stdc++.h>
using namespace std;
string inhoa(string s){
    for(int i=0; i<s.size();i++){
        if(i==0){
            s[i] = toupper(s[i]);
        }
        else{
            s[i] = tolower(s[i]);
        }
    }
    return s;
}
void chuanhoa(string s, int k){
    string tmp;
    stringstream ss(s);
    vector<string> v;
    while(ss >> tmp){
        v.push_back(inhoa(tmp));
    }
    if(k==1){
        cout << v[v.size()-1] << " ";
        for(int i=0; i<v.size()-1; i++){
            cout << v[i] << " ";
        }
    }
    else if(k==2){
        for(int i=1; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << v[0] << " ";
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n;
        string s;
        cin >> n;
        cin.ignore();
        getline(cin,s);
        chuanhoa(s,n);
        cout << endl;
    }
}