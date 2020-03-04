#include<iostream>
#include<algorithm>
using namespace std;
int arr[301];
int dp[301];
void func();
int t;
int main(void) {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
	}
	func();
}
void func() {
	dp[0] = arr[0];
	dp[1] = max(arr[0] + arr[1], arr[1]);
	dp[2] = max(arr[1] + arr[2], arr[0] + arr[2]);
	for (int i = 3; i < t; i++) {
		dp[i] = max(arr[i] + dp[i - 2], arr[i] + arr[i - 1] + dp[i - 3]);
	}
	cout << dp[t-1] << endl;
}