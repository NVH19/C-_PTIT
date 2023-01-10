#include<bits/stdc++.h>
using namespace std;
string reset(string s){
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int main(){
    ifstream in_file{"VANBAN.in"};
    string tmp;
    set<string> s;
    while(in_file >> tmp){
        s.insert(reset(tmp));
    }
    for(auto x : s){
        cout << x << endl;
    }
}