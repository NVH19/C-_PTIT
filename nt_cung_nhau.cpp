#include<bits/stdc++.h>
using namespace std;
int a[100002];
void nt(){
    for(int i=2; i<=100002; i++)
        a[i] = 1;
    for(int i=2; i<=sqrt(100002); i++){
        if(a[i]){
            for(int j=i*i; j<=100002; j+=i)
                a[j]= 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        nt();
        cin >> x;
        int cnt=0;
        for(int i=1; i<x; i++){
            if(__gcd(i,x)==1){
                cnt++;
            }
        }
        if(a[cnt])
            cout << 1 << endl;
        else 
            cout << 0 << endl;
        memset(a,sizeof(int),0);
    }
}