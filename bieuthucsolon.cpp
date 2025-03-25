#include<bits/stdc++.h>
using namespace std;
long long a[10001];
string s[10001];
void khoi_tao() {
    int  m = 1, carry = 0; a[0] = 1;
    for(int i = 1; i <= 1000; i++) {
        for(int j = 0; j < m; j++) {
            int so_hientai = a[j] * i * 2 + carry;
            a[j] = so_hientai % 10;
            carry = so_hientai / 10;
        }
        while(carry > 0) {
            a[m] = carry % 10;
            ++m;
            carry /= 10;
        }
        for(int j = m-1; j >= 0; j--) {
            s[i] += a[j] + '0';
        }
    }
}
int main () {
    khoi_tao();
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        if(n==0) cout << 1 << endl;
        else cout << s[n] << endl;
    }
    return 0;
}