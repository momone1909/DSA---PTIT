#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    sort(a.begin(), a.end());  
    int sum_k = accumulate(a.begin(), a.begin() + k, 0);
    int sum_nk = accumulate(a.begin(), a.begin() + (n - k), 0);
    int result = max(abs(total_sum - 2 * sum_k), abs(total_sum - 2 * sum_nk));
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
