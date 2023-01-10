#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,tmp,max=INT_MIN,idx;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1]){
                tmp = i;
            }
        }
        for(int i=tmp+1; i<n; i++){
            if(a[i]<a[tmp] && a[i]> max){
                max = a[i];
                idx = i;
            }
        }
        // cout << tmp << " " << idx;
        swap(a[tmp],a[idx]);
        int l=tmp+1,r=n-1;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
        for(int i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}