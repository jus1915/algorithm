#include<iostream>
#include<algorithm>
using namespace std;
int dp[1001][3];
int cost[1001][3];
int n;
void func(int p);

int main(void) {
	cin >> n;
	func(n);
	return 0;
}
void func(int p) {
	for (int i = 1; i <= p; i++) {
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
	}
	for (int i = 1; i <= p; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[i][2];
	}
	cout << min(dp[p][0], dp[p][1], dp[p][2]) << endl;
}