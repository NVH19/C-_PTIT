#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n][k];
        int b[n+k+1];
        int dem=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                cin >> a[i][j];
                b[dem] = a[i][j];
                dem++;
            }
        }
        sort(b, b+ dem);
        for(int i=0; i<dem; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}