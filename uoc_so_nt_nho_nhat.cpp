#include<bits/stdc++.h>
using namespace std;
int result(int n){
    int cnt=0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return i;
            cnt++;
        }
    }
    if(cnt==0)
        return n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1; i<=n; i++){
            cout << result(i) << " ";
        }
        cout << endl;
    }
}