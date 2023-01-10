#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1],b[n+1];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        int tmp=0;
        for(int i=0; i<n; i++){
            int x=0,y=0;
            for(int j=i; j<n; j++){
                x += a[j];
                y += b[j];
                if(x==y)
                    tmp = max(j-i+1,tmp);
            }
        }
        cout << tmp << endl;
    }
}