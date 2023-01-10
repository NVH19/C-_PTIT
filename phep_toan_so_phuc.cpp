#include<bits/stdc++.h>
using namespace std;
struct SoPhuc{
    int thuc,ao;
};
SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B){
    SoPhuc C;
    int t1 = A.thuc + B.thuc, t2 = A.ao + B.ao;
    C.thuc = t1*t1-t2*t2;
    C.ao = 2*t1*t2;
    return C;
}
void hien_thi(SoPhuc A){
    cout << A.thuc << " + " << A.ao << "i"; 
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
