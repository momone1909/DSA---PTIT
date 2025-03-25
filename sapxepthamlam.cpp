#include <bits/stdc++.h>
using namespace std;
int main(){
	//nhap bo test
	int t;
	cin >> t;
	while(t--){
		bool ok  = true;
		//nhap n, mang a, luu mang a vao mang b
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		for(int i = 0;i<n;i++){
			cin >> a[i];
			b[i] = a[i];
		}
		//sap xep mang b
		sort(b.begin(), b.end());
		// xet dieu kien 
		for(int i = 0;i<n;i++){
			if(b[i] != a[i] && a[i] != b[n-i-1]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout << "Yes";
		}
		else {
	    	cout << "No";
		}
		cout << endl;
	}
}