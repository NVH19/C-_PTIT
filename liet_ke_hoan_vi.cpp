#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=1; i<=n; i++)
            a[i]=i;
        while(1){
            for(int i=1; i<=n; i++){
                cout << a[i];
            }
            cout << " ";
            int i=n-1,j=n;
            while(a[i]>a[i+1] && i>0)i--;
            if(i==0){
                break;
            }
            else{
                while(a[i]>a[j])j--;
                swap(a[i],a[j]);
                int l=i+1,r=n;
                while(l<r){
                    swap(a[l],a[r]);
                    l++; r--;
                }
            }
        }
        cout << endl;
    }
}