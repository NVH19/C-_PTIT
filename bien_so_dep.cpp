#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int tmp=0,tmp1=0,tmp2=0,tmp3=0;
        for(int i=5; i<s.size(); i++){
            if(i!=8){
                if(s[i]<s[i+1])
                    tmp++;
                if(s[i]==s[i+1])
                    tmp1++;
                if(s[i]=='6' || s[i]=='8'){
                    tmp2++;
                }
            }
        }
        if(s[5]==s[6]&&s[6]==s[7] && s[9]==s[10])
            tmp3=1;
        if(tmp1==4 || tmp2==5 || tmp3==1  || tmp==3)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
