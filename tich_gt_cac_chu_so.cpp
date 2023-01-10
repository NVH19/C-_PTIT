#include<bits/stdc++.h>
using namespace std;
void result(int n, string s){
    int a[10]={};
    for(int i=0; i<n; i++){
        int tmp = s[i]-'0';
        switch(tmp){
            case 2 :
                a[2]++; break;
            case 3 :
                a[3]++; break;
            case 4 :
                a[3]++;
                a[2]+=2;
                break;
            case 5 :
                a[5]++;
                break;
            case 6 :
                a[5]++; a[3]++;
                break;
            case 7 :
                a[7]++;
                break;
            case 8 :
                a[7]++;
                a[2]+=3;
                break;
            case 9 :
                a[7]++;
                a[2]++;
                a[3]+=2;
                break;
        }
    }
    // cout << a[3] << " " << a[2];
    for(int i=7; i>=2; i--){
        for(int j=0; j<a[i]; j++){
             cout << i;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        result(n,s);
        cout << endl;
    }
}