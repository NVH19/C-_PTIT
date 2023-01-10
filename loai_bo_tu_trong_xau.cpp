#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,k;
    getline(cin,s);
    getline(cin,k);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        if(k!=tmp)
            cout << tmp << " ";
    }
    cout << endl;
}