#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        int min = *min_element(a,a+n);
        int uc = a[0]-min;
        for(int i=0; i<n; i++){
            uc = __gcd(uc,a[i]-min);
        }
        int cnt=0;
        for(int i=1; i<= uc; i++){
            if(uc%i==0)
                cnt++;
        }
        cout << cnt << endl;
    }
}