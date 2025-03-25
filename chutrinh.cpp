#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ke[1005];
bool used[1005];
void nhap(){
	memset(used, 0, sizeof(used));
	for(auto &v : ke) v.clear();
	cin >> n >> m;
	while(m--){
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
	}
} 
bool check(){
	int deg1[n+1] = {0}, deg2[n+1] = {0};
	for(int i = 1;i<=n;i++){
		deg1[i] = ke[i].size();
	}
	for(int i= 1;i<=n;i++){
		for(auto v : ke[i]){
			deg2[v]++;
		}
	}
	for(int i = 1;i<=n;i++){
		if(deg1[i]!=deg2[i]){
			return false;
		}
	}
	return true;
}
// doc du lieu xay dung danh sach ke
//kiem tra du lieu ban bac vao bang ban bac ra
//kiem tra dk xong in ra ket qua
int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		if(check()){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
	return 0;
}