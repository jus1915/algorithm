#include<iostream>
#include<algorithm>
using namespace std;
int arr[11];
void func(int p);
int main(void) {
	int t;
	cin >> t;
	int n;
	for (int i = 0; i < t; i++) {
		cin >> n;
		func(n);
	}
	return 0;
}
void func(int p) {
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= p; i++) {
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
	}
	cout << arr[p] << endl;
}