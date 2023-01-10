#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a , pair<int,int> b){
    return (a.second < b.second);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n],b[n];
        pair<int,int> p;
        for(int i=0; i<n; i++){
            cin >> a[i];
            p.first = a[i];
            p.second = abs(x-a[i]);
        }
        sort(a,a+n,cmp);
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}