#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
int check(double a, double b, double c){
    if(a+b<=c || a+c<=b || b+c<=a)
        return 0;
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        double x1,y1,x2,y2,x3,y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double ab = sqrt(pow(x1-x2,2) + pow(y1-y2,2)), bc = sqrt(pow(x3-x2,2) + pow(y3-y2,2)), ac = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
        // cout << ab << " " << bc << " " << ac << endl;
        if(check(ab,bc,ac)==0){
            cout << "INVALID";
        }
        else{
            double tmp1 = ab+bc+ac , tmp2 = ab+bc-ac, tmp3 = bc+ac-ab, tmp4 = ac+ab-bc;
            double s = sqrt(tmp1*tmp2*tmp3*tmp4);
            double r = (ab*bc*ac)/s;
            cout << fixed << setprecision(3) << PI*r*r;
        }
        cout << endl;
    }
}