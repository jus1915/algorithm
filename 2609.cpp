#include<iostream>
using namespace std;
long long dp[46];
int main(void) {
	int n;
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}
	cout << dp[n] << endl;
	return 0;
}
