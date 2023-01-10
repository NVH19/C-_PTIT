#include<bits/stdc++.h>
using namespace std;
long long d=100000000;
int main(){
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        string name;
        getline(cin,name);
        int n;
        cin >> n;
        long long a[n];
        long long s=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]<0){
                s += abs(a[i]);
            }
        }
        // cout << s;
        if(s>=d){
            cout << "YES";
        }
        else
            cout << "NO";
        cout << endl;
    }
}