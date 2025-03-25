#include <bits/stdc++.h>
using namespace std;
int main(){
	//nhap so bo test
	int t;
	cin >> t;
	while(t--){
		//nhap bieu thuc
		string s;
		cin >> s;
		stack<string> st;
		//luu so ki tu vao len
		int len = s.size();
		//duyet tu cuoi bieu thuc den ki tu dau
		for(int i = len-1;i>=0;i--){
			// gap cac toan tu thi lay ra tung toan hang va luu vao stack, khi ma lay thi ta day ra khoi stack
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string tt = a + b + s[i];
				st.push(tt);
				//day vao stack khi cong a b va toan tu
			}
			//ep kieu ki tu ve string
			else{
				st.push(string(1, s[i]));
			}
		}
		//in ra
		cout << st.top() << endl;
	}
	return 0;
}