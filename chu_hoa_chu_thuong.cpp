#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        if(65 <= (int)c  && (int)c <= 90)
            cout << (char)(c +32);
        else if(97 <= (int)c && (int)c <= 122)
            cout << (char)(c-32);
        cout << endl;
    }
}