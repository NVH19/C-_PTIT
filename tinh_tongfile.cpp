#include<bits/stdc++.h>
using namespace std;
int check(string s){
    for(int i=0; i<s.size(); i++){
        if(!isdigit(s[i]))
            return 0;
    }
    return 1;
}
int main(){
    ifstream in_file{"DATA.in"};
    string tmp;
    long long s=0;
    while(in_file >> tmp){
        if(tmp.size()<=9 && tmp.size()>0 && check(tmp)){
            s += stoi(tmp);
        }
    }
    cout << s;
}