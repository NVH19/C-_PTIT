#include<bits/stdc++.h>
using namespace std;
int result(int n,int a[]){
    int s = INT_MIN;
    for(int i=0; i<n-1 ; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]-a[i] > s)
                s = a[j]-a[i];
        }
    }
    if(s == INT_MIN)
        return -1;
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        cout << result(n,a) << endl;
    }
}