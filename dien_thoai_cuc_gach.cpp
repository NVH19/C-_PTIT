#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int check(char c){
    if(c=='a' || c=='b' || c=='c')
        return 2;
    else if(c=='d' || c=='e' || c=='f')
        return 3;
    else if(c=='g' || c=='h' || c=='i')
        return 4;
    else if(c=='j' || c=='k' || c=='l')
        return 5;
    else if(c=='m' || c=='n' || c=='o')
        return 6;
    else if(c=='p' || c=='q' || c=='r' || c=='s')
        return 7;
    else if(c=='t' || c=='u' || c== 'v'){
        return 8;
    }
    else
        return 9;
}
int result(int a[],int n){
    int l=0,r=n-1;
    while(l<r){
        if(a[l]!=a[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        s = chuanhoa(s);
        // cout << s << endl;
        int a[10000];
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            a[cnt] = check(s[i]);
            cnt++;
        }
        // for(int i=0; i<cnt; i++){
        //     cout << a[i];
        // }
        // cout << endl;
        if(result(a,cnt)){
            cout << "YES" ;
        }
        else
            cout << "NO";
        cout << endl;
    }
}