#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        int inc=0,duo=0;
        for(int i=0; i<n; i++){
            int tmp=0;
            while(a[i]>0){
                if(a[i]%2==0){
                    while(a[i]%2==0){
                        tmp++;
                        a[i]/=2;
                    }
                }
                else{
                    a[i] -= 1;
                    inc++;
                }
            }
            duo = max(duo,tmp);
        }
        cout << inc + duo << endl;
    }
}