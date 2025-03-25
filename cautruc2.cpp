#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	queue<int> st;
	for(int i = 0;i<t;i++){
		string x;
		cin >> x;
		if(x == "PUSH"){
			int a;
	      	cin >> a;
			st.push(a);
		}
		else if(x == "PRINTFRONT"){
			if(st.empty()==1){
				cout << st.front()<<endl;
			}
			else{
				cout << "NONE" << endl;
			}
		}
		else if(x == "POP"){
			if(!st.empty()){
				st.pop();
			}
		}
		
	}
	return 0;
}