#include <bits/stdc++.h>
using namespace std;
struct job{
	int stt, dl, pr;
};
bool cmp(job a, job b){
	return a.pr > b.pr;
}
int main(){
	int t;
 	cin >> t;
	while(t--){
		int n;
		cin >> n;
		job a[n];
		for(int i = 0;i<n;i++){
			cin >> a[i].stt >> a[i].dl >> a[i].pr;
		}
		sort(a, a+n, cmp);
		int d = 0, res = 0;
		int f[1001] = {0};
		for(int i = 0;i<n;i++){
			while(f[a[i].dl] && a[i].dl > 0){
				a[i].dl -= 1;
			}
			if(!f[a[i].dl] && a[i].dl > 0){
				f[a[i].dl] = 1;
				res  += a[i] .pr;
				d++;
			}
		}
		cout << d << " " << res;
		cout << endl;
	}
}