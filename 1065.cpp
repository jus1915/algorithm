#include<iostream>
using namespace std;
int main(void) {
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i<100) {
			cnt++;
		}
		else {
			int a, b, c;
			a = i / 100;
			b = (i % 100) / 10;
			c = i - (a * 100 + b * 10);
			if (b - a == c - b)
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}