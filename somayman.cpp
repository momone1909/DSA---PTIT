#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		int d4 = 0, d7 = 0;
		int so4 = 1e5, so7 = 1e5;
		for(int i = n;i>=0;i--){
			if(n-4*i>=0 && (n-4*i)%7==0){
				d4 = i;
				d7 = (n-4*i)/7;
				if(so4 + so7 > d4 + d7){
					so4 = d4;
					so7  = d7;
				}
				else if(so4 + so7  == d4 + d7){
					if(so4 > d4){
						so4 = d4;
						so7  = d7;
					}
				}
			}
		}
		if(4*so4 +  7*so7 == n){
			for(int i = 0;i<so4;i++){
				cout << 4;
			}
			for(int i = 0;i<so7;i++){
				cout << 7;
			}
		}
		else{
			cout << -1;
		}
		cout << endl;
	}
}