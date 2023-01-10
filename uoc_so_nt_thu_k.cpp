#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[100];
        int cnt = 1;
        for(int i=2; i<=sqrt(n); i++){
            while(n%i==0){
                a[cnt] = i;
                cnt++;
                n /= i;
            }
        }
        if(n!=1){
            a[cnt] = n;
            cnt++;
        }
        if(k >= cnt)
            cout << -1 << endl;
        else{
            cout << a[k] << endl;
        }
    }
}