#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int tmp ;
        for(int i=2; i<=sqrt(n); i++){
            while(n%i==0){
                n /= i;
                tmp = i;
            }
        }
        if(n!=1)
            cout << n << endl;
        else    
            cout << tmp << endl;
    }
}