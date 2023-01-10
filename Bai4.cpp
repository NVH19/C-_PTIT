#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a[100];
    int tmp=0,cnt=1;
    map<long long,int> mp;
    a[0]=0,a[1]=1;
    mp[0]=1,mp[1]=1;
    for(int i=2; i<100; i++){
        a[i] = a[tmp] + a[cnt];
        mp[a[i]]++;
        tmp++;
        cnt++;
    }
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(mp[n]>0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
        mp.empty();
    }
}