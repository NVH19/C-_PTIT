#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        int max=0;
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=i; j--){
                if(a[i]<=a[j]){
                    int tmp=j-i;
                    if(max<tmp) max=tmp; 
                    break;
                }
            }
        }
        cout << max << endl;
    }
}