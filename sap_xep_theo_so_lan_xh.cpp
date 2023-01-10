#include<bits/stdc++.h>
using namespace std;
int b[100004];
int cmp(int a0, int a1){
    if(b[a0]==b[a1]) return a0<a1;
    return b[a0] > b[a1]; 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        sort(a,a+n,cmp);
        for(int i=0; i<n; i++) cout << a[i] << " ";
        memset(b,0,sizeof(b));
        cout << endl;
    }
}