#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n],c[n];
        int d=0,e=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int tmp = INT_MAX,res;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(a[i] + a[j]) < tmp){
                    tmp = abs(a[i] + a[j]);
                    res = a[i] + a[j];
                }
            }
        }
        cout << res;
        cout << endl;
    }
}
