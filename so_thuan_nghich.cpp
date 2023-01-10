#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,tmp=0;
        cin >> n;
        long long m=n;
        while(n!=0){
            int r = n%10;
            tmp = tmp*10 + r;
            n /= 10;
        }
        if(m==tmp)
            cout << "YES" << endl;
        else   
            cout << "NO" << endl;
    }
}