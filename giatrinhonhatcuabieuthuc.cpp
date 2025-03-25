#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		long long tich = 0;
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		for(int i = 0;i<n;i++){
			cin >> b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<int>());
		for(int i = 0;i<n;i++){
			tich = a[i] * b[i] + tich;
		}
		cout << tich << endl;
	}
}