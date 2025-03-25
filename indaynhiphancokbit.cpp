#include <bits/stdc++.h>
using namespace std;
int n, k, a[17];
 void in(){
    for(int i = 1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
 }
 void Try(int i, int cnt){
    for(int j = 0;j<=1;j++){
        a[i] = j;
        if(i == n && cnt + j == k){
            in();
        }
        if(i < n){
            Try(i+1, cnt + j);
        }

    }
 }
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n>>k;
        Try(1, 0);
    }
    return 0;
}