#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int  d[404] = {0};
		int res = 0;
		for(int i = 0;i<s.size();i++){
			d[s[i]]++;
			if(res < d[s[i]]){
				res = d[s[i]];
			}
		}
	    if(res <= ((s.size()+1)/2)){
	    	cout << "1" <<endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
}