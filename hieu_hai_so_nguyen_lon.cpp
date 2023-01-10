#include <bits/stdc++.h> 
using namespace std;
string hieu(string a,string b){ 
    string res=""; 
    while(a.length()<b.length()){ 
        a="0"+a;
    } 
    while(b.length()<a.length()){ 
        b="0"+b; 
    } 
    int l=a.length()-1;
    if (a<b) swap(a,b); 
    int nho=0,ok; 
    for (int i=l;i>=0;i--){
        ok = (a[i]-'0')-(b[i]-'0')-nho; 
        if (ok<0){ 
            res = char((ok+10)+'0') + res; 
            nho = 1; 
        }
         else{ 
            res = char(ok+'0') + res; 
            nho = 0;
        }
    }
        return res; 
} 
int main(){ 
    int t; cin>>t;
     cin.ignore();
      while(t--){ 
        string a,b;
        cin >> a >> b; 
        cout << hieu(a,b) << endl;
    }
}