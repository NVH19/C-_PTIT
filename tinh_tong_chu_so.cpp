#include<bits/stdc++.h>
using namespace std;
int tong(int n){
    int a=0;
    while(n!=0){
        a += n%10;
        n /= 10;
    }
    if(a<10)
        return a;
    else    
        return tong(a);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << tong(n) << endl;
    }
}