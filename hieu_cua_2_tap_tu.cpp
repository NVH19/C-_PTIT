#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        map<string,int> mp1;
        map<string,int> mp2;
        stringstream ss1(s1);
        stringstream ss2(s2);
        string tmp1,tmp2;
        while(ss2 >> tmp2){
            mp2[tmp2]++;
        }
        while(ss1 >> tmp1){
            if(mp2[tmp1]==0){
                mp1[tmp1]++;
            }
        }
        for(auto x : mp1){
            cout << x.first << " ";
        }
        cout << endl;
    }
}