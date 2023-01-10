#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=1; i<=n; i++)
            cin >> a[i];
        while(k--){
            int l,r;
            cin >> l >> r;
            int s = 0;
            for(int i=l; i<=r; i++)
                s += a[i];
            cout << s << endl;
        }
    }
}
