#include<iostream>
#include<queue>
using namespace std;
int N, M, x = 1, y = 1;
int arr[1000][1000];

int main(void) {
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			arr[i][j] = 1;
		}
	}
	arr[1][1] = N * N;
	int p = arr[1][1];
	while (p > 1) {
		if (arr[x][y - 1] != 1 && arr[x + 1][y] == 1) {
			while (true) {
				x++;
				arr[x][y] = --p;
				if (arr[x+1][y] != 1) break;
			}
		}
		if (arr[x + 1][y] != 1 && arr[x][y + 1] == 1) {
			while (true) {
				y++;
				arr[x][y] = --p;
				if (arr[x][y+1] != 1) break;
			}
		}
		if (arr[x][y+1] != 1 && arr[x-1][y] == 1) {
			while (true) {
				x--;
				arr[x][y] = --p;
				if (arr[x-1][y] != 1) break;
			}
		}
		if (arr[x][y+1] != 1 && arr[x][y - 1] == 1) {
			while (true) {
				y--;
				arr[x][y] = --p;
				if (arr[x][y-1] != 1) break;
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (arr[i][j] == M) {
				x = i;
				y = j;
			}
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << x << " " << y << endl;
	return 0;
}