#include<bits/stdc++.h>
using namespace std;
int result(int n){
    int cnt = 0;
    if(n%2==0)
        cnt++;
    else{
        return 0;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            if(i%2==0)
                cnt++;
            if(n/i % 2 ==0 && i != n/i)
                cnt++;
        }
    }
    return cnt;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << result(n) << endl;
    }
}