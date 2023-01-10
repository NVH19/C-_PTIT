#include<bits/stdc++.h>
using namespace std;
string reset(string s){
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int main(){
    ifstream in_file1("DATA1.in");
    ifstream in_file2("DATA2.in");
    set<string> s1;
    set<string> s2;
    string tmp1,tmp2;
    map<string,int> mp;
    while(in_file1 >> tmp1){
        s1.insert(reset(tmp1));
        mp[reset(tmp1)]++;
    }
    while(in_file2 >> tmp2){
        s1.insert(reset(tmp2));
        if(mp[reset(tmp2)]>0){
            s2.insert(reset(tmp2));
        }
    }
    for(auto x:s1){
        cout << x << " ";
    }
    cout << endl;
    for(auto x:s2){
        cout << x << " ";
    }
}