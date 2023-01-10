#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    char a[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}; 
    char b[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    while(t--){
        int n;
        cin >> n;
        char s[15];
        double diem = 10;
        for(int i=0; i<15;i++)
            cin >> s[i];
        for(int i=0; i<15; i++){
            if(n==101){
                if(a[i] != s[i])
                    diem -= (double)2/3;
            }
            else{
                if(b[i] != s[i])
                    diem -= (double)2/3;
            }
        }
        cout << fixed << setprecision(2) << diem << endl;
    }
}