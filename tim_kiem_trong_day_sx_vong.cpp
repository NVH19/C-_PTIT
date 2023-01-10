// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n,m;
//         cin >> n >> m;
//         int a[n];
//         int res = INT_MAX;
//         int tmp;
//         for(int i=1; i<=n; i++){
//             cin >> a[i];
//             if(a[i] < res){
//                 res = a[i];
//                 tmp = i;
//             }
//         }
//         if(m >= a[0])
//             cout << 1+a[0]-m << endl;
//         else{
//             cout << tmp+m-res << endl;
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n+5];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        for(int i=1; i<=n; i++){
            if(a[i]==m){
                cout << i << endl;
                break;
            }
        }
    }
}