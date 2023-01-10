#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    }
    stringstream ss(s);
    string tmp;
    vector<string> a;
    while(ss >> tmp){
        a.push_back(tmp);
    }
    cout << a.back();
    for(int i=0; i<a.size()-1; i++){
        cout << a[i][0];
    }
    cout << "@ptit.edu.vn" << endl;
}