#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long s = (long long)n*(n+1);
        cout << s/2 << endl;
    }
}