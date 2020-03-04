#include<iostream>
using namespace std;
int gcd(int a, int b);
int main(void) {
	int n;
	int arr[100] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++) {
		int k = gcd(arr[0], arr[i]);
		cout << arr[0] / k << "/" << arr[i] / k << endl;
	}
	return 0;
}
int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}