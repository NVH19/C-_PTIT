#include<bits/stdc++.h>
using namespace std;
int test(string s){
    if(s.back() == '?')
        return 0;
    return 1;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    string a[t];
    map<string,int> mp;
    for(int i=0; i<t; i++){
        getline(cin,a[i]);
    }
    string tmp;
    for(int i=0; i<t; i++){
        if(test(a[i])){
            tmp = a[i];
            cout << a[i] << ": " ;
            mp[tmp]=0;
        }
        else{
            mp[tmp]++;
        }
        if(test(a[i+1])==1)
            cout << mp[tmp] << endl;
    }
    
}