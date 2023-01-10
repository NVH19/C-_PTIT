#include<bits/stdc++.h>
using namespace std;
int a[100005];
void nt(){
    for(int i=2; i<= 100005; i++)
        a[i]=1;
    for(int i=1; i<= sqrt(100005); i++){
        if(a[i]){
            for(int j=2*i; j<= 100005; j+=i){
                a[j]=0;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(n>m)
            swap(m,n);
        nt();
        int cnt=0;
        for(int i=n; i<=m; i++){
            if(a[i])
                cnt++;
        }
        cout << cnt << endl;
    }
}