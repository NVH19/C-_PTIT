#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a,a+n);
        int i=0,j;
        if(n%2==0){
            j = n/2-1;
        }
        else{
            j = n/2;
        }
        int b[n],c[n],dem=0,cnt=0;
        for(int i=0; i<=j; i++){
            b[dem]=a[i];
            dem++;
        }
        for(int i=j+1; i<n; i++){
            c[cnt]=a[i];
            cnt++;
        }
        // for(int i=0; i<dem; i++) cout << b[i] << " ";
        // cout << endl;
        // for(int i=0; i<cnt; i++) cout << c[i] << " "; 
        // cout << endl;
        vector<int> v;
        for(int i=0; i<cnt; i++){
            v.push_back(b[i]);
            v.push_back(c[i]);
        }
        if(v.size()!=n){
            v.push_back(a[j]);
        }
        for(int i=0; i<v.size(); i++)
            cout <<v[i]<< " ";
        cout << endl;
    }
}