#include<iostream>
#include<climits>
using namespace std;
int K, N;
long long arr[10000];
int main(void) {
	cin >> K >> N;
	for(int i = 0; i < K; i++) {
		cin >> arr[i];
	}
	long long le = 0, ri = LLONG_MAX, mid;
	while (le <= ri) {
		mid = (le + ri) / 2;
		int sum = 0;
		for (int i = 0; i < K; i++) {
			sum += arr[i] / mid;
		}
		if (sum < N)
			ri = mid - 1;
		else
			le = mid + 1;
	}
	cout << ri << endl;
	return 0;
}