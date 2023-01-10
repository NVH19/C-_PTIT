#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n+1], b[m+1];
        set<int> h;
        set<int> g;
        for(int i=0; i<n; i++){
            cin >> a[i];
            h.insert(a[i]);
        }
        int k = h.size();
        for(int i=0; i<m; i++){
            cin >> b[i];
            h.insert(b[i]);
            if(h.size()==k)
                g.insert(b[i]);
            else    
                k = h.size();
        }
        for(int x : h)
            cout << x << " ";
        cout << endl;
        for(int x : g)
            cout << x << " ";
        cout << endl;
    }
}