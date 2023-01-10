#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        long long tich=INT_MIN;
        for(int i=0; i<n; i++){
            long long res=1;
            for(int j=i; j<n; j++){
                res *= a[j];
                if(res==0){
                    break;
                }
                tich = max(tich,res);
            }
            
        }
        cout << tich << endl;
    }
}