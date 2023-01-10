#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
    return a < b;
}
int main(){
    int n;
    cin >> n;
    int a[n][n];
    vector<int> v;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            v.push_back(a[i][j]);
        }
    }
    sort(v.begin(),v.end(),cmp);
    int cnt=0;
    int h1=0,h2=n-1,c1=0,c2=n-1;
    while(h1<=h2 && c1<=c2){
        for(int i=c1; i<=c2; i++){
            a[h1][i] = v[cnt];
            cnt++;
        }
        h1++;
        for(int i=h1; i<=h2; i++){
            a[i][c2] = v[cnt];
            cnt++;
        }
        c2--;
        if(h1<=h2){
            for(int i=c2; i>=c1; i--){
                a[h2][i] = v[cnt];
                cnt++;
            }
            h2--;
        }
        if(c1<=c2){
            for(int i=h2; i>=h1; i--){
                a[i][c1] = v[cnt];
                cnt++;
            }
            c1++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}