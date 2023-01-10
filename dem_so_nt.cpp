#include<bits/stdc++.h>
using namespace std;
int a[100002];
void nt(){
    for(int i=2; i<100002; i++)
        a[i] = 1;
    for(int i=2; i<= sqrt(100002); i++){
        if(a[i]){
            for(int j = i*i; j<100002; j+=i)
                a[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        nt();
        int n,m;
        cin >> n >> m;
        if(n>m)
            swap(n,m);
        int cnt = 0;
        for(int i=n; i<=m; i++){
            if(a[i])
                cnt++;
        }
        cout << cnt << endl;
        memset(a,sizeof(int),0);
    }
}