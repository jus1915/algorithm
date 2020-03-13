#include<iostream>
using namespace std;
int n[6] = { 1,2,3,4,5,6 };
int m[5] = { 1,2,4,8,16 };
int n_p[6] = { 5000000,3000000,2000000,500000,300000,100000 };
int m_p[5] = { 5120000,2560000,1280000,640000,320000 };
int main(void) {
	int T, a, b;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		int sum = 0;
		if (a <= 21) {
			int k = 0;
			for (int j = 0; k < a; j++) {
				k += n[j];
				if (k >= a) {
					sum += n_p[j];
					break;
				}
			}
		}
		if (b <= 31) {
			int k = 0;
			for (int j = 0; k < b; j++) {
				k += m[j];
				if (k >= b) {
					sum += m_p[j];
					break;
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}