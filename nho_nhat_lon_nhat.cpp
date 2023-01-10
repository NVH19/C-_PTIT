#include<bits/stdc++.h>
using namespace std;
string min(int n, int s){
    if(s>9*n || s==0&&n>0)
        return "-1";
    vector<int> v(n);
    s -= 1;
    for(int i=n-1; i>0; i--){
        if(s>9){
            v[i]=9;
            s -= 9;
        }
        else{
            v[i]=s;
            s = 0;
        }
    }
    v[0] = s+1;
    string res = "";
    for(int i=0; i<n; i++){
        res.push_back(v[i]+'0');
    }
    return res;
}
string max(int n, int s){
    if(s>9*n || s==0&&n>0)
        return "-1";
    vector<int> v(n);
    for(int i=0; i<n; i++){
        if(s>9){
            v[i]=9;
            s -= 9;
        }
        else{
            v[i]=s;
            s = 0;
        }
    }
    string res = "";
    for(int i=0; i<n; i++){
        res.push_back(v[i]+'0');
    }
    return res;
}
int main(){
    int n,s;
    cin >> n >> s;
    cout << min(n,s) << " " << max(n,s);
}