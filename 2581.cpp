#include<iostream>
using namespace std;
int main(void) {
	int arr[10001] = { 0 };
	arr[1] = 1;
	for (int i = 2; i < 10000; i++) {
		if (arr[i] == 0) {
			for (int j = 2; j*i <= 10000; j++) {
				arr[j * i] = 1;
			}
		}
	}
	int p, q;
	int sum = 0;
	cin >> p >> q;
	for (int i = p; i <= q; i++) {
		if (arr[i] == 0)
			sum += i;
	}
	if (sum == 0) {
		cout << "-1" << endl;
		return 0;
	}
	else
		cout << sum << endl;
	for (int i = p; i <= q; i++) {
		if (arr[i] == 0) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}