#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ok=0;
        while(n!=0){
            int r = n%10;
            if(r!=0 && r!=6 && r!=8)
                ok++;
            n /= 10;
        }
        if(ok==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}