#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(s.size()<100){
            for(int i=0; i<s.size(); i++){
                cout << s[i];
            }
        }
        else{
           string tmp;
           stringstream ss(s);
           vector<string> v;
           while(ss >> tmp){
            v.push_back(tmp);
           }
           string tmp1 = "";
           for(int i=0; i<v.size(); i++){
                if((tmp1 + v[i]).size()<100){
                    tmp1 += v[i];
                    tmp1 += " ";
                }    
                else{
                    break;
                }
            }
            for(int i=0; i<tmp1.size()-1; i++)
                cout << tmp1[i];
        }
        cout << endl;
    }
}