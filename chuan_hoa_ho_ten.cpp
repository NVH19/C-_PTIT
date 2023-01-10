#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    }
}
int main(){
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 87 && s[i] <= 122)
            s[i] -= 32;
    }
    stringstream ss(s);
    string tmp;
    vector<string> a;
    while(ss >> tmp){
        a.push_back(tmp);
    }
    for(int i=0; i<a.size()-1; i++){
        for(int j=1; j<a[i].size(); j++){
            if(a[i][j] >= 65 && a[i][j] <= 90)
                a[i][j] += 32;
        }
    }
    for(int i=0; i<a.size()-1; i++){
        cout << a[i];
        if(i!=a.size()-2)
            cout << " ";
    }
    cout << ", " << a[a.size()-1];
}