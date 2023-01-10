#include<bits/stdc++.h>
using namespace std;
int a[100005];
void sang(){
    for(int i=2; i<=100005; i++)
        a[i]=1;
    for(int i=2; i<=sqrt(100005); i++){
        if(a[i]){
            for(int j=i*i; j<=100005; j+=i)
                a[j]=0;
        }
    }
}
int check(int n){
    int s = 0;
    while(n>0){
        s += n%10;
        n /= 10;
    }
    return s;
}
int nt(int n){
    int tmp = n,res=0;
    for(int i=2; i<=(tmp)/2; i++){
        while(tmp%i==0){
            tmp /= i;
            res += check(i);
        }
    }
    if(tmp>1) res += check(tmp);
    return res;
}
int main(){
    int t;
    cin >> t;
    sang();
    while(t--){
        int n;
        cin >> n;
        // cout << check(n) << " " << nt(n);
        if(check(n)==nt(n)&&a[n]==0)
            cout << "YES";
        else    
            cout << "NO";
        cout << endl;
    }
}