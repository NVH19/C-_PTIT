#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[k+2];
        for(int i=1; i<=k; i++){
            a[i] = i;
        }
        while(1){
            for(int i=1; i<=k; i++)
                cout << a[i];
            cout << " ";
            int i = k;
            while(a[i]==n-k+i)i--;
            if(i==0){
                break;
            }
            a[i]++;
            for(int j=i+1; j<=k; j++){
                a[j] = a[j-1]+1;
            }
        }
        cout << endl;
    }
}