#include<bits/stdc++.h>
using namespace std;
int a[1000005];
void nt(){
    for(int i=2; i<=1000005; i++)
        a[i] = 1;
    for(int i=2; i<=sqrt(1000005); i++){
        if(a[i]){
            for(int j= i*i; j<=1000005; j+=i)
                a[j] = 0;
        }
    }
}
int result(long long n){
    nt();
    int cnt =0;
    for(int i=2; i<=sqrt(n); i++){
        if(a[i])
            cnt++;
    }
    return cnt;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << result(n) << endl;
    }
}