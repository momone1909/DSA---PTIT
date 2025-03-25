#include <bits/stdc++.h>
using namespace std;
int calulatesum(int from, int to){
    int sum = 0;
    for (int i = from; i <= to; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int a = 10, b = 15;
    int result = calulatesum(a, b);
    cout << result << endl;
    return 0;
}