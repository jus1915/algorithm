#include<iostream>
#include<queue>
using namespace std;
int yy[] = { -1,0,1,0 }, xx[] = { 0,1,0,-1 };
int map[50][50];
queue <int> Q;
int ch[50][50];
int T, M, N, K;
int main(void) {
	cin >> T;
	int cnt = 0;
	for (int t = 0; t < T; t++) {
		cin >> M >> N >> K;
		for (int k = 0; k < K; k++) {
			int a, b;
			cin >> a >> b;
			map[b][a]++;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (map[i][j] && !ch[i][j]) {
					Q.push(i); Q.push(j);
					ch[i][j] = ++cnt;
				}
				while (!Q.empty()) {
					int Y = Q.front(); Q.pop();
					int X = Q.front(); Q.pop();
					for (int p = 0; p < 4; p++) {
						int y = Y + yy[p], x = X + xx[p];
						if (y >= 0 && x >= 0 && x < M && y < N) {
							if (map[y][x] && !ch[y][x]) {
								Q.push(y); Q.push(x);
								ch[y][x] = cnt;
							}
						}
					}
				}
			}
		}
		cout << cnt << endl;
		for (int p = 0; p < 50; p++) {
			for (int q = 0; q < 50; q++) {
				map[p][q] = 0; ch[p][q] = 0;
			}
		}
		cnt = 0;
	}
	return 0;
}