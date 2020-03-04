#include<iostream>
using namespace std;
int trees[1000000];
int N, M;
int main(void) {
	cin >> N >> M;
	int max = -1;
	for (int i = 0; i < N; i++) {
		cin >> trees[i];
		if (trees[i] > max)
			max = trees[i];
	}
	int le = 0, ri = max;
	while (le <= ri) {
		int mid = (le + ri) / 2;
		long sum = 0;
		for (int i = 0; i < N; i++) {
			if (trees[i] - mid > 0)
				sum += trees[i] - mid;
		}
		if (sum >= M)
			le = mid + 1;
		else
			ri = mid - 1;
	}
	cout << ri << endl;
	return 0;
}