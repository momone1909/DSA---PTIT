#include <bits/stdc++.h>
using namespace std;

int n, a[100];
bool ok = true;

void sinh() {
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]) i--;
    if (i == 0) {
        ok = false;
    } else {
        int j = n;
        while (a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1); // Đảo ngược đoạn cuối thay vì swap tay
    }
}

void in() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << " ";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            a[i] = i;
        }
        ok = true;
        while (ok) {
            in();
            sinh();
        }
        cout << endl;
    }
    return 0;
}
