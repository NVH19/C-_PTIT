#include<bits/stdc++.h>
using namespace std;
int a[1000006];
// int nt(int n){
//     if(n<2) return 0;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%2==0)
//             return 0;
//     }
//     return 1;
// }
void sang(){
    for(int i=2; i<=1000006; i++)
        a[i]=1;
    for(int i=2; i<= sqrt(1000006); i++){
        if(a[i]){
            for(int j=i*i; j<=1000006; j+=i)
                a[j]=0;
        }
    }
}
// int check(long long n){
//     double a = sqrt(n);
//     if(nt(a))
//         return 1;
//     return 0;
// }
int main(){
    int t;
    cin >> t;
    sang();
    while(t--){
        long long l,r;
        cin >> l >> r;
        if(l>r) swap(l,r);
        long long cnt=0;
        for(int i=sqrt(l); i<=sqrt(r); i++){
            if(a[i]){
                cnt++;
                // cout << i << " ";
            }
        }
        cout << cnt << endl;
    }
}