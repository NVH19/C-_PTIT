#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main(){
    int t;
    cin >> t;
    for(int i=1; i<=10000; i++)
        a[i] = 1;
    for(int i=2; i<=sqrt(10000); i++){
        if(a[i]){
            for(int j=2*i; j<=10000; j+=i)
                a[j] = 0;
        }
    }
    while(t--){
        int n;
        cin >> n;
        for(int i=2; i<=n; i++){
            if(a[i])
                cout << i << " ";
        }
        cout << endl;
    }
}