#include<bits/stdc++.h>
using namespace std;
int lcm(int m,int n){
    int a=m,b=n;
    while(a!=b){
        a = abs(a-b);
        b = abs(a-b);
    }
    return m/a * n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n,a,b;
        cin >> m >> n >> a >> b;
        int cnt=0,dem=0,tmp=0;
        int d = lcm(a,b);
        for(int i=m; i<=n; i++){
            if(i%a==0){
                cnt++;
            }
            if(i%b==0)
                dem++;
            if(i%d==0)
                tmp++;
        }
        cout << cnt + dem - tmp;
        cout << endl;
    }
}