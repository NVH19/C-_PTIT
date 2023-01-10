#include<bits/stdc++.h>
using namespace std;
int nt(int n){
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int ok=0;
        for(int i=2; i<20; i++){
            // if(pow(2,i-1)*(pow(2,i)-1)==n && nt(i)){
            //     ok=1;
            //     break;
            // }
            if(nt(i) && i!= 11 && pow(2,i-1)*(pow(2,i)-1)==n){
                ok = 1;
                break;
            }
        }
        if(ok) cout << 1;
        else cout << 0;
        cout << endl;
    }
}