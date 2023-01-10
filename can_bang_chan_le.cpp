#include<bits/stdc++.h>
using namespace std;
int test(int n){
    int chan = 0, le = 0;
    while(n!=0){
        int r = n %10;
        if(n%2==0)
            chan++;
        else   
            le++;
        n /= 10;
    }
    if(chan==le)
        return 1;
    else    
        return 0;
}
int main(){
    int n;
    cin >> n;
    int cnt=0;
    int a = pow(10,n) - 1, b = pow(10,n-1);
    for(int i=b; i <= a; i++){
        if(test(i)){
            cout << i << " ";
            cnt++;
        }
        if(cnt==10){
            cout << endl;
            cnt=0;
        }
    }
}