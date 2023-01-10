#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0 ;i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        int b[n*m];
        int cnt=0;
        int h1=0,c1=0,h2=n-1,c2=m-1;
        while(h1<=h2 && c1<=c2){
            for(int i=c1; i<=c2; i++){
                b[cnt++]=a[h1][i];
            }
            h1++;
            for(int i=h1; i<=h2; i++){
                b[cnt++]=a[i][c2];
            }
            c2--;
            if(h1<=h2){
                for(int i=c2; i>=c1; i--){
                        b[cnt++]=a[h2][i];
                    }
                h2--;
            }
            if(c1<=c2){
                for(int i=h2; i>=h1; i--){
                        b[cnt++]=a[i][c1];
                    }
                c1++;
            }
        }
        reverse(b,b+cnt);
        for(int i=0; i<cnt; i++) cout << b[i] << " ";
        cout << endl;
    }
}
// 2
// 4 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// 3 6
// 1 2 3 4 5 6
// 7 8 9 10 11 12
// 13 14 15 16 17 18