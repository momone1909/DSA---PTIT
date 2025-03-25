#include <bits/stdc++.h>
using namespace std;

int parti(int a[], int l, int r){
	int pivot   = a[r]; // phan tu ben phai cung
	int i = l - 1;
	for(int j = l;j<r;j++){
		if(a[j] <= pivot){
			++i;
			swap(a[i], a[j]);
		}
	}
	++i;
	// dua chot ve giua mang
	swap(a[i] , a[r]);
	// tra ve vi tri giua mang
	return i;
}
void  quicksort(int a[], int l, int r){
	if(l >= r) return;
	int p = parti(a, l, r);
	// chia thanh 2 mang con
	quicksort(a, l, p-1);
	quicksort(a, p+1, r);
}
int main(){
	// nhap so luong bo test
	int t;
	cin >> t;
	while(t--){
	int a[1000];
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	// goi ham quick sort
	quicksort(a, 0, n - 1);
	// in kq
	for(int i = 0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

}