#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        long long s = a%c;
        for(int i=2; i<=b; i++){
            s = s*a%c;
        }
        cout << s << endl;
    }
}