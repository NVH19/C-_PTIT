
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m =4*n;
        int a[m][m];
        int tmp=1;
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                a[i][j] = tmp++;
            }
        }
        int h1=0,h2=m-1,c1=0,c2=m-1;
        vector<int> v1;
        vector<int> v2;
        while(h1<h2&&c1<c2){
            for(int i=h1; i<h2; i++){
                v1.push_back(a[i][c1]);
                v2.push_back(a[m-i-1][m-c1-1]);
            }
            c1++;c2--;
            for(int i=c1; i<=c2; i++){
                v1.push_back(a[h2][i]);
                v2.push_back(a[m-h2-1][m-i-1]);
            }
            h2--;h1++;
            for(int i=h2; i>=h1; i--){
                v1.push_back(a[i][c2]);
                v2.push_back(a[m-i-1][m-c2-1]);
            }
            c2--;c1++;
            for(int i=c2; i>=c1; i--){
                v1.push_back(a[h1][i]);
                v2.push_back(a[m-h1-1][m-i-1]);
            }
            h1++;h2--;
        }
        for(int i=v2.size()-1; i>=0; i--){
            if(v2[i]==v2[i-1]){
                cout << v2[i] << " ";
                i--;
            }
            else
                cout << v2[i] << " ";
        }
        cout << endl;
        for(int i=v1.size()-1; i>=0; i--){
            if(v1[i]==v1[i-1]){
                cout << v1[i] << " ";
                i--;
            }
            else
                cout << v1[i] << " ";
        }
        cout << endl;
        // for(int i=0; i<v1.size(); i++){
        //     cout << v1[i] << " ";
        // }
        // cout << endl;
        // for(int i=0; i<v2.size(); i++){
        //     cout << v2[i] << " ";
        // }
        }
        
}