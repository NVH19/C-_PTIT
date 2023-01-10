#include<bits/stdc++.h>
using namespace std;
int min(int n,int a[],int k,int h){
    int tmp = lower_bound(a+h,a+n,k)-a;
    return tmp;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+1];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long cnt = 0;
        int max = a[n];
        for(int i=0; i<n-1; i++){
            // if(a[i]+k<max){
            //     cnt += (long long)min(n,a,a[i]+k,i)-i-1;
            // }
            // else{
            //     cnt += (long long)n-1-i;
            // }
            cnt += (long long)min(n,a,a[i]+k,i)-i-1;
        }
        cout << cnt << endl;
    }
}