#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        vector<string> v;
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            v.push_back(tmp);
        }
        for(int i=v.size()-1; i>=0; i--){
            cout << v[i];
            if(i!=0)
                cout << " ";
        }
        cout << endl;
    }
}