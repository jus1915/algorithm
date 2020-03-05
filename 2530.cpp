#include<iostream>
using namespace std;
int main(void) {
	int h, m, s;
	int t;
	cin >> h >> m >> s;
	cin >> t;
	s += t;
	if (s >= 60) {
		m += s / 60;
		s %= 60;
	}
	if (m >= 60) {
		h += m / 60;
		m %= 60;
	}
	if (h >= 24) {
		h %= 24;
	}
	cout << h << " " << m << " " << s << "\n";
	return 0;
}