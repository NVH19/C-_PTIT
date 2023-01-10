#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+2];
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> a[i];
        v.push_back(a[i]);
    }
    int ok=1;
    while(ok){
        ok=0;
        for(int i=0; i<v.size()-1; i++){
            if((v[i] + v[i+1])%2==0){
                int tmp = i;
                v.erase(v.begin() + tmp,v.begin() + (tmp+2));
            }
        }
        for(int i=0; i<v.size()-1; i++){
            if((v[i] + v[i+1])%2==0){
                ok=1;
            }
        }
        for(int i=0; i<v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << v.size() << endl;
}