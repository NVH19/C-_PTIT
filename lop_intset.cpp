#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream in_file{"DATA.in"};
    // while(in_file){
        int n,m;
        in_file >> n >> m;
        int a[n],b[m];
        map<int,int>mp;
        set<int> s;
        for(int i=0; i<n; i++){
            in_file >> a[i];
            mp[a[i]]++;
        }
        for(int i=0; i<m; i++){
            in_file >> b[i];
            if(mp[b[i]]>0){
                s.insert(b[i]);
            }
        }
        for(auto x : s)
            cout << x << " ";
    in_file.close();
}
