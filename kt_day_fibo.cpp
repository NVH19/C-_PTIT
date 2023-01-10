#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++)
            cin >> a[i];
        long long b[50];
        b[0] = 0;
        b[1] = 1;
        map<long long,int> mp;
        mp[0] = 1, mp[1] = 1;
        int tmp1 = 0, tmp2 = 1;
        for(int i=2; i<50; i++){
            b[i] = b[tmp1] + b[tmp2];
            mp[b[i]]++;
            tmp1++;
            tmp2++;
        }
        for(int i=0; i<n; i++){
            if(mp[a[i]])
                cout << a[i] << " ";
        }
        cout << endl;
    }
}