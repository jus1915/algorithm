#include<iostream>
#include<cstring>
using namespace std;
string week[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT"};
int main(void) {
	int x, y;
	int day = 0;
	cin >> x >> y;
	if (x == 1) {
		day += y;
	}
	else {
		for (int i = 1; i < x; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				day += 31;
			}
			else if (i == 2) {
				day += 28;
			}
			else {
				day += 30;
			}
		}
		day += y;
	}
	cout << week[(day % 7)] << endl;
	return 0;
}