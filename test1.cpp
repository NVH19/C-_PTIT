#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n+2],b[n+2];
        vector<int> v;
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int tmp = b[n-1];
        for(int i=0; i<n; i++){
            if(a[i]==tmp){
                v.push_back(m);
            }
            v.push_back(a[i]);
        }
        for(int i=0; i<v.size(); i++){
            if(v[i] < 0)
                cout << v[i] << " ";
        }
        for(int i=0; i<v.size(); i++){
            if(v[i]>=0)
                cout << v[i] << " ";
        }
        cout << endl;
    }
}