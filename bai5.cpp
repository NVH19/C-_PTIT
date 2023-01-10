#include<bits/stdc++.h>
using namespace std;
double lamtron(double a){
    double b = a - (int)a;
    if(b == 0.25 || b == 0.75)
        a += 0.25;
    return a;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        double a[14]={3, 5, 7, 10, 13, 16, 20, 23, 27, 30, 33, 35, 37, 39};
        double b[14]={2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6, 6.5, 7, 7.5, 8, 8.5, 9};
        int a1, a2;
        double b1, b2, l, r;
        cin >> a1 >> a2 >> b1 >> b2;
        for(int i=0; i<14; i++){
            if(a1>a[i])
                l=b[i];
            if(a2>a[i])
                r=b[i];
            
        }
        double tong=(l+r+b1+b2)/4;
        if(tong-(int)tong<0.25)
            tong = (double)(int)tong;
        else if(tong-(int)tong<0.75)
            tong = (double)(int)tong+0.5;
        else
            tong = (double)(int)tong+1;
            cout << fixed << setprecision(1) << tong << endl;
    }
}