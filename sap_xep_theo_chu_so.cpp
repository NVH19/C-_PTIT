#include<bits/stdc++.h>
using namespace std;
int res(int a,int b){
    return to_string(a)+to_string(b) > to_string(b)+to_string(a);
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a,a+n,res);
        for(int i=0; i<n; i++){
            cout << a[i];
        }
        cout << endl;
    }
}