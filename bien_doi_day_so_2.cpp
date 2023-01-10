#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++){
            if(i==0){
                cout << (long long)a[i]*a[i+1] << " ";
            }
            else if(i==n-1)
                cout << (long long)a[i]*a[i-1] << " ";
            else
                cout << (long long)a[i+1]*a[i-1] << " ";
        }
        cout << endl;
    }
}