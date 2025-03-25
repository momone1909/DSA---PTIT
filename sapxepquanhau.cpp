#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, cnt = 0;
int x [100];
bool cot[100], xuoi[100], nguoc[100];
void back(int i){
    for(int j = 1; j <= n; j++){
        if(!cot[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
            x[i] = j;
            cot[j] = true;
            xuoi[i-j+n] = true;
            nguoc[i+j-1] = true;
            if(i == n) cnt++;
            else back(i+1);
            cot[j] = false;
            xuoi[i-j+n] = false;
            nguoc[i+j-1] = false;
        }
    }
}
int main(){

    cin >> n;
    back(1);
    cout << cnt<<endl;
    return 0;
    }
