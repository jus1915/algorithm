#include<iostream>
using namespace std;
int main(void) {
	int n;
	int p;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p;
		sum += p - 1;
	}
	cout << sum + 1 << endl;
	return 0;
}