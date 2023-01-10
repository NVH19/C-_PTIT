#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a1,b1,c1;
        cin >> a1 >> b1 >> c1;
        long long a[a1],b[b1],c[c1];
        for(int i=0; i<a1; i++) cin >> a[i];
        for(int i=0; i<b1; i++) cin >> b[i];
        for(int i=0; i<c1; i++) cin >> c[i];
        vector<long long> v;
        int l=0,r=0,k=0;
        while(l<a1 && r<b1 && k<c1){
            if(a[l]==b[r]&&a[l]==c[k]){
                v.push_back(a[l]);
                l++;
                r++;
                k++;
            }
            else if(a[l]<=b[r]&&a[l]<=c[k]){
                l++;
            }
            else if(b[r]<=a[l]&&b[r]<=c[k]){
                r++;
            }
            else k++;
        }
        if(v.size()==0){
            cout << "-1";
        }
        else{
            for(auto x : v){
                cout << x << " ";
            }
        }
        cout << endl;
    }
}