#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int r = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1')
                r = (2*r + 1)%5;
            else
                r = (2*r)%5;
        }
        if(r==0)
            cout << "Yes" << endl;
        else    
            cout << "No" << endl;
    }
}