#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int m = n*n;
        int b[m];
        for(int i=0; i<m; i++)
            cin >> b[i];
        sort(b,b+m);
        for(int i=0; i<m; i++)
            cout << b[i] << " ";
        cout << endl;
        cout << b[k-1] << endl;
    }
}