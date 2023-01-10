#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a,b;
        int c[10000];
        cin >> a >> b;
        if(a.size() < b.size()){
            while(a.size() < b.size()){
                a = '0' + a;
            }
        }
        else{
            while(b.size() < a.size()){
                b = '0' + b;
            }
        }
        // cout << a << b;
        int ok,nho=0,res,cnt=0;
        for(int i=a.size()-1; i>=0; i--){
            res = (a[i]-'0') + (b[i] - '0') + nho;
            if(res > 9){
                ok = res % 10;
                nho = 1;
            }
            else{
                ok = res;
                nho = 0;
            }
            c[cnt] = ok;
            cnt++;
        }
        if(nho){
            c[cnt] = 1;
            cnt++;
        }
        for(int i=cnt-1; i>=0; i--)
            cout << c[i];
        cout << endl;
    }
}