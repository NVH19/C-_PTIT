#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n],cnt=0;
        set<int> s;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        vector<int> v;
        for(auto x : s){
            b[cnt++]=x;
        }
        for(int i=0; i<n; i++){
            if(a[i]==b[cnt-1])
                cout << "_" << " ";
            else{
               auto it = upper_bound(b,b+cnt,a[i]);
               cout << *it << " ";
            }
        }
        cout << endl;
    }
}