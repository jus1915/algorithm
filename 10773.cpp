#include<iostream>
#include<stack>
using namespace std;
stack <int> S;
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 0)
			S.pop();
		else {
			S.push(a);
		}
	}
	int sum = 0;
	while (!S.empty()) {
		sum += S.top();
		S.pop();
	}
	cout << sum << endl;
	return 0;
}