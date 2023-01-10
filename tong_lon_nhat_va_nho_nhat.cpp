#include<bits/stdc++.h>
using namespace std;
long long max(string a, string b){
    for(int i=0; i<a.size(); i++){
        if(a[i] == '5')
            a[i] = '6';
    }
    for(int i=0; i<b.size(); i++){
        if(b[i] == '5')
            b[i] = '6';
    }
    long long a1 = stoll(a),b1 = stoll(b);
    return a1+b1;
}
long long min(string a, string b){
    for(int i=0; i<a.size(); i++){
        if(a[i] == '6')
            a[i] = '5';
    }
    for(int i=0; i<b.size(); i++){
        if(b[i] == '6')
            b[i] = '5';
    }
    long long a1 = stoll(a),b1 = stoll(b);
    return a1+b1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string n,m;
        cin >> n >> m;
        cout << min(n,m) << " " << max(n,m);
        cout << endl;
    }
}