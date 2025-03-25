#include <bits/stdc++.h>
using namespace std;
int tong(int a[], int n){
    int s = 0;
    for(int i = 0;i<n;i++){
        s += a[i];
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[1000];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        cout << tong(a, n) << endl;
    }
}
