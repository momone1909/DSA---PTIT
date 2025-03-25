#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        stack<int> st;
        string s = "";

        // Nhập giá trị cho mảng a
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            s += "[" + to_string(a[0]); // Ghi lại phần tử đầu tiên
            for (int j = 1; j < n - i; j++) {
                s += " " + to_string(a[j]);
                b[j] = a[j - 1] + a[j];  // Giả sử bạn đang thực hiện phép tính cộng hai phần tử
            }
            s += "]\n";
            a = b; // Cập nhật mảng a cho lần lặp tiếp theo
        }

        cout << s;
    }
}
