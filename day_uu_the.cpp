#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int c=0,l=0,n=0;
        char d = ' ';
        while(d != '\n'){
            int x;
            cin >> x;
            n++;
            if(x%2==0)
                c++;
            else    
                l++;
            d = getchar();
        }
        if(n%2==0&&c>l || n%2==1&&l>c)
            cout << "YES"  << endl;
        else
            cout << "NO" << endl;
    }
}