#include<bits/stdc++.h>
using namespace std;
int tu(string s){
    int cnt=0;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    string a[n+4];
    int sobai=0, loai1=1,loai2=2;
    vector<int> v;
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin,a[i]);
    }
    // for(int i=0; i<n; i++){
    //     cout << tu(a[i]) << endl;
    // }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(tu(a[i])==6 && tu(a[i+1])==8 && tu(a[i+2])!=6){
            sobai++;
            v.push_back(loai1);
        }
        else if(tu(a[i])==7){
            cnt++;
        }
        if(cnt==4){
            v.push_back(loai2);
            sobai++;
            cnt=0;
        }
    }
    cout << sobai << endl;
    for(int i=0; i<v.size(); i++)
        cout << v[i] << endl;
}
