#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b);
int main(void) {
	int n;
	int arr[100] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int g = arr[1] - arr[0];
	for (int i = 2; i < n; i++) {
		g = gcd(g, arr[i] - arr[i - 1]);
	}
	for (int i = 2; i <= g; i++) {
		if (g % i == 0) {
			cout << i << " ";
		}
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