#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream in_file{"DATA.in"};
    int n;
    map<int,int> mp;
    while(in_file >> n){
        mp[n]++;
    }
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
}