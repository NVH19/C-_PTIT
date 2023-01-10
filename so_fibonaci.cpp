#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll a[95];
    a[0]=1;
    a[1]=1;
    int dem = 0,tmp = 1;
    for(int i=2; i<=92; i++){
        a[i] = a[dem] + a[tmp];
        dem++;
        tmp++;
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << (long long)a[n-1] << endl;
    }
}