#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        long long res = 0,sum = INT_MIN;
        for(int i=0; i<n; i++){
            res += a[i];
            if(res>=sum){
                sum = res;
            }
            if(res<0) res=0;
        }
        cout << sum << endl;
    }
}