#include<iostream>
#include<vector>
using namespace std;
int n, m;
void func(int cnt);
int list[8];
bool check[8];
void func(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << list[i] << " ";
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++)
		if (!check[i]) {
			list[cnt] = i;
			func(cnt + 1);
		}
}
int main(void) {
	cin >> n >> m;
	func(0);
	return 0;
}