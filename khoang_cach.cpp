#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        double a,b,c,d;
        cin >> a >> b >> c >> d;
        double m = pow(c-a,2), n = pow(d-b,2);
        cout << fixed << setprecision(4) << double(sqrt(m+n)) << endl;
    }
}