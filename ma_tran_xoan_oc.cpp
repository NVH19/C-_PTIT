#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cin >> a[i][j];
        }
        int h1=0,h2=n-1,c1=0,c2=m-1;
        int cnt=0;
        int b[n*m];
        while(h1 <= h2 && c1 <= c2){
            if(h1<=h2){
                for(int i=c1; i<=c2; i++){
                    b[cnt] = a[h1][i];
                    cnt++;
                }
            }
            h1++;
            if(c1<=c2){
                for(int i=h1; i<=h2; i++){
                    b[cnt] = a[i][c2];
                    cnt++;
                }
            }
            c2--;
            if(h1<=h2){
                for(int i=c2; i>=c1; i--){
                    b[cnt] = a[h2][i];
                    cnt++;
                }
            }
            h2--;
            if(c1<=c2){
                for(int i=h2; i>=h1; i--){
                    b[cnt] = a[i][c1];
                    cnt++;
                }
            }
            c1++;
        }
        for(int i=0; i<cnt; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}