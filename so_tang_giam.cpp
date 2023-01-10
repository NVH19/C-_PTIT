#include<bits/stdc++.h>
using namespace std;
int nt(int n){
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int test(int x){
    int c=0,l=0;
    int y = x/10,z=0;
    int ok1,ok2 ;
    while(y!=0){
        z++;
        if(x%10 > y%10)
            c++;
        else if(x%10 < y%10)
            l++;
        x /= 10;
        y /= 10;
    }
    if(c==z || l==z)
        return 1;
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt=0;
        int dau = pow(10,n-1);
        int cuoi = pow(10,n);
       for(int k=dau; k<cuoi; k++){
            if(test(k)){
                if(nt(k))
                    cnt++;
            }
       }
        cout << cnt << endl;
        // if(test(n))
        //     cout << 1 << endl;
        // else    
        //     cout << 0 << endl;
    }
}