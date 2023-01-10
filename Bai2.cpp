#include<bits/stdc++.h>
using namespace std;
long long result(long long n){
    long long s=0;
    if(n==1)
        return 1;
    for(int i=1; i<= sqrt(n); i++){
        if(n%i==0){
            if(i!=n/i)
                s = s + i + n/i;
            else
                s = s + i;
        }
    }
    return s;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << result(n) << endl;
    }
}