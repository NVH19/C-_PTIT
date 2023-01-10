#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long s = 1;
        int a[n+3] = {0};
        for(int i=1; i<=n; i++){
            int tmp = i;
            for(int j=2; j<=tmp; j++){
                int cnt = 0;
                while(tmp%j==0){
                    cnt++;
                    tmp /= j;
                }
                a[j] = max(cnt,a[j]);
            }
        }
        for(int i=1; i<=n; i++){
            long long m = pow(i,a[i]);
            if(a[i]>0){
                s = s * (long long)m;
            }
        }
        cout << s << endl;
    }
}