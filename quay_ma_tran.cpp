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
        int tmp;
        while(h1<h2 && c1<c2){
            int s1 = a[h1+1][c1];
            for(int i=c1; i<=c2; i++){
                tmp = a[h1][i];
                a[h1][i] = s1;
                s1 = tmp;
            }
            h1++;
            for(int i=h1; i<=h2; i++){
                tmp = a[i][c2];
                a[i][c2] = s1;
                s1 = tmp;
            }
            c2--;
            if(h1<=h2){
                for(int i=c2; i>=c1; i--){
                    tmp = a[h2][i];
                    a[h2][i] = s1;
                    s1 = tmp;
                }
                h2--;
            }
            if(c1<=c2){
                for(int i=h2; i>=h1; i--){
                    tmp = a[i][c1];
                    a[i][c1] = s1;
                    s1 = tmp;
                }
                c1++;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cout << a[i][j] << " "; 
        }
        cout << endl;
    }
}