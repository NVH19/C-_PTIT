#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        long long a[n],b[m];
        long long dem=0;
        long long c[n+m+1];
        for(int i=0; i<n; i++){
            cin >> a[i];
            c[dem] = a[i];
            dem++;
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
            c[dem] = b[i];
            dem++;
        }
        sort(c,c+dem);
        for(int i=0; i<dem; i++)
            cout << c[i] << " ";
        cout << endl;
    }
}