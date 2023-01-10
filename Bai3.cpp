#include<bits/stdc++.h>
using namespace std;
int tong(int m){
    int n=m;
    int s =0 ;
    while(n!=0){
        s += n%10;
        n /= 10;
    }
    return s;
}
int test(int m){
    int s=0;
    int n=m;
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            s += tong(i);
            n /= i;
        }
    }
    if(n!=1)
        s += n;
    return s;
}
int main(){
    int n;
    cin >> n;
    if(tong(n) == test(n))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}