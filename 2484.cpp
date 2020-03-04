#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b);
int main(void) {
	int n;
	cin >> n;
	int* a;
	int* b;
	a = new int[n];
	b = new int[n - 1];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n - 1; i++) {
		b[i] = a[i + 1] - a[i];
	}
	int min=100000001;
	for (int i = 0; i < n - 2; i++) {
		if(min>gcd(b[i],b[i+1]))
			min = gcd(b[i], b[i + 1]);
	}
	cout << ((a[n - 1] - a[0]) / min) + 1 - n << endl;
	return 0;
}
int gcd(int a, int b) {
	int tmp, n;
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}