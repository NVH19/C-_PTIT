#include<bits/stdc++.h>
using namespace std;
struct people{
    string name,ns;
};
int cmp(people a, people b){
    string s1 = a.ns , s2 = b.ns;
    int ng1 = (s1[0]-'0')*10 + (s1[1]-'0'), ng2 = (s2[0]-'0')*10 + (s2[0]-'0');
    int t1 = (s1[3]-'0')*10 + (s1[4]-'0'), t2 = (s2[3]-'0')*10 + (s2[4]-'0');
    int n1 = stoi(s1.substr(6)), n2 = stoi(s2.substr(6));
    if(n1!=n2){
        return n1>n2;
    }
    if(t1!=t2){
        return t1>t2;
    }
    return ng1>ng2;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string a[n];
    people b[n];
    for(int i=0; i<n; i++){
        getline(cin,a[i]);
    }
    for(int i=0; i<n; i++){
        string tmp;
        stringstream ss(a[i]);
        vector<string> v;
        while(ss>>tmp){
            v.push_back(tmp);
        }
        b[i].name = v[0];
        b[i].ns = v[1];
    }
    sort(b,b+n,cmp);
    cout << b[0].name << endl;
    cout << b[n-1].name;
}