#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    double tong = 0;
    int cnt=0;
    double min = a[0], max = a[n-1];
    for(int i=0; i<n; i++){
        if(a[i]!=min && a[i]!=max){
            cnt++;
            tong += a[i];
        }
    }
    cout << fixed << setprecision(2) << (double)tong/cnt;
}