#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a,a+n);
        vector<int> v;
        if(n%2==0){
            for(int i=0; i<n/2; i++){
                v.push_back(a[n-i-1]);
                v.push_back(a[i]);
            }
        }
        else{
            for(int i=0; i<=n/2; i++){
                v.push_back(a[n-i-1]);
                v.push_back(a[i]);
            }
            v.pop_back();
        }
        for(int x : v)
            cout << x << " ";
        cout << endl;
    }
}