#include<iostream>
using namespace std;

int main(void) {
	long long F[91];
	F[0] = 0;
	F[1] = 1;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}
	cout << F[n] << endl;
	return 0;
}