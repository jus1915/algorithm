#include<iostream>
using namespace std;
int main(void) {
	int a, b, v, day;
	cin >> a >> b >> v;
	if ((v - a) % (a - b) == 0)
		day = (v - a) / (a - b) + 1;
	else
		day = (v - a) / (a - b) + 2;
	cout << day << endl;
	return 0;
}