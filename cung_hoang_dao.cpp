#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int ngay,thang;
        cin >> ngay >> thang;
        switch(thang){
            case 1:{
                if(ngay>19) cout << "Bao Binh";
                else cout << "Ma Ket";
                break;
            }
            case 2:{
                if(ngay>18) cout << "Song Ngu";
                else cout << "Bao Binh";
                break;
            }
            case 3:{
                if(ngay>20) cout << "Bach Duong";
                else cout << "Song Ngu";
                break;
            }
            case 4:{
                if(ngay>19) cout << "Kim Nguu";
                else cout << "Bach Duong";
                break;
            }
            case 5:{
                if(ngay>20) cout << "Song Tu";
                else cout << "Kim Nguu";
                break;
            }
            case 6:{
                if(ngay>20) cout << "Cu Giai";
                else cout << "Song Tu";
                break;
            }
            case 7:{
                if(ngay>22) cout << "Su Tu";
                else cout << "Cu Giai";
                break;
            }
            case 8:{
                if(ngay>22) cout << "Xu Nu";
                else cout << "Su Tu";
                break;
            }
            case 9:{
                if(ngay>22) cout << "Thien Binh";
                else cout << "Xu Nu";
                break;
            }
            case 10:{
                if(ngay>22) cout << "Thien Yet";
                else cout << "Thien Binh";
                break;
            }
            case 11:{
                if(ngay>22) cout << "Nhan Ma";
                else cout << "Thien Yet";
                break;
            }
            case 12:{
                if(ngay>21) cout << "Ma Ket";
                else cout << "Nhan Ma";
                break;
            }
        }
        cout << endl;
    }
}