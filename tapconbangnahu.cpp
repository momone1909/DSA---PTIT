#include <bits/stdc++.h>
using namespace std;
int n, a[105], k;5
bool ok = false;
vector<int> v;
void back(int pre, int sum){
	if(ok){
		return;
	}
	for(int i = pre + 1;i<=n;i++){
		int x = sum + a[i];
		if(sum+a[i] <= k){
			v.push_back(a[i]);
			if(sum + a[i] == k){
				ok = true;
			}
			else {
			back(i, sum + a[i]);
		}
		   v.pop_back();
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ok = false;
		cin >> n;
		int sum = 0;
		for(int i = 1;i<=n;i++){
			cin >> a[i];
			sum+=a[i];
		}
		if(sum%2==0){
			k = sum/2;
			back(0, 0);
			if(ok) {
				cout << "YES\n";
			}
			else{
			cout << "NO\n";
	   }
     }
		else{
			cout << "NO\n";
		}
		
	}
}