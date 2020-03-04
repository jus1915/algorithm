#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int INF = 987654321;
string arr[50];
string w[8] = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW",
				"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" };
string b[8] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB",
				"BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };
int wChange(int y, int x) {
	int cnt = 0;
	for (int i = y; i < y + 8; i++) {
		for (int j = x; j < x + 8; j++) {
			if (arr[i][j] != w[i - y][j - x])
				cnt++;
		}
	}
	return cnt;
}
int bChange(int y, int x) {
	int cnt = 0;
	for (int i = y; i < y + 8; i++) {
		for (int j = x; j < x + 8; j++) {
			if (arr[i][j] != b[i - y][j - x])
				cnt++;
		}
	}
	return cnt;
}
int main(void) {
	int a, b;
	int result = INF;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i + 7 < a; i++) {
		for (int j = 0; j + 7 < b; j++) {
			result = min(result, min(wChange(i, j), bChange(i, j)));
		}
	}
	cout << result << endl;
	return 0;
}