#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        int dem=0,cnt=0;
        for(int i=0; i<n; i++){
            if(a[i]<=k)
                dem++;
        }
        for(int i=0; i<dem; i++){
            if(a[i]<=k)
                cnt++;
        }
        int ans=cnt;
        for(int i=dem; i<n; i++){
            if(a[i-dem]<=k) cnt--;
            if(a[i]<=k) cnt++;
            ans = max(ans,cnt);
        }
        cout << dem-ans <<endl;
    }
}